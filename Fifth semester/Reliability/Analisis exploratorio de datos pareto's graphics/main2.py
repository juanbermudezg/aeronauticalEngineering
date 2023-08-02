import pandas as pd
import matplotlib.pyplot as plt
from sklearn.preprocessing import MinMaxScaler
def color_barra(valor):
    
    if valor == 0:
        return 'green'
    elif valor >=1 and valor <= 124:
        return 'yellow'
    elif valor>124 and valor<=499:
        return 'orange'
    elif valor > 499 and valor<=1000:
        return 'red'
# Leer el archivo Excel en un DataFrame
df = pd.read_excel('Confiabilidad.xlsx')
df['SISTEMA'] = df['SISTEMA'].str.capitalize()
columnas = {'Dificultad D':'NivelDificultad'}
df=df.rename(columns=columnas)

# Crear un objeto MinMaxScaler para escalar los datos
scalerOne2Ten = MinMaxScaler(feature_range=(0, 10))

# Escalar la columna deseada
df['CRITICIDAD'] = scalerOne2Ten.fit_transform(df[['CRITICIDAD']])
df['NivelDificultad']=scalerOne2Ten.fit_transform(df[['NivelDificultad']])
df['Frecuencia']=scalerOne2Ten.fit_transform(df[['Frecuencia']])
# Imprimir el DataFrame con la columna escalada
NPR=df.Frecuencia*df.NivelDificultad*df.CRITICIDAD
df['ValorNPR']=NPR
cantidadDatos = len(df.SISTEMA.value_counts())
sistemas = df.SISTEMA.value_counts()

# Agrupar los datos por el nombre del sistema y calcular la media de criticidad
grouped_df = pd.DataFrame({'SISTEMA':[],'ValorNPR':[]})
for i in range(0,len(sistemas)):
    indices = sistemas.index[i]
    df_temp = df.SISTEMA == indices
    sistemas_temp = df[df_temp]
    ValorNPRTemp = sistemas_temp.ValorNPR.mean()
    nuevaFila = pd.Series({'SISTEMA':indices,'ValorNPR':ValorNPRTemp})
    
    grouped_df.loc[len(grouped_df)] = nuevaFila
sorted_df = grouped_df.sort_values(by='ValorNPR', ascending=False)
# Calcular las frecuencias relativas de cada valor
relative_freq = sorted_df.ValorNPR / sorted_df.ValorNPR.sum()
print(sorted_df)
# Calcular las frecuencias acumuladas y las frecuencias relativas acumuladas
cumulative_freq = relative_freq.cumsum()
cumulative_rel_freq = cumulative_freq / cumulative_freq.max()*100

# Crear un gráfico de barras con las frecuencias relativas
fig, ax1 = plt.subplots()
ax1.bar(sorted_df.SISTEMA, sorted_df.ValorNPR, color=[color_barra(valor) for valor in sorted_df['ValorNPR']])
ax1.set_title('Valor NPR en sistemas de aeronave', fontweight='bold')
ax1.set_xlabel('Sistemas')
ax1.set_ylabel('Valor NPR')
ax1.tick_params(axis='y')

# Crear una curva acumulativa con las frecuencias relativas acumuladas
ax2 = ax1.twinx()
ax2.plot(sorted_df.SISTEMA, cumulative_rel_freq, color='black', marker='X')

ax2.tick_params(axis='y')
plt.annotate('Por: Juan A. Bermudez', xy=(0.8, 0), xycoords='axes fraction', fontsize=10, color='gray', ha='center', va='bottom')
# Rotar las etiquetas de los sistemas para que se vean mejor en el gráfico
ax1.set_xticklabels(sorted_df.SISTEMA, ha='center', fontsize=10, rotation=90)
#plt.figure(figsize=(8, 4), dpi=150)
#Salvar gráfico
fig.subplots_adjust(bottom=0.4)
plt.savefig('diagramaParetoConfiabilidad_NPR_JABG.png')


# Mostrar el gráfico
plt.show()

