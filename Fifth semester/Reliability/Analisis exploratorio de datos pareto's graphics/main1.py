import pandas as pd
import matplotlib.pyplot as plt
# Leer el archivo Excel en un DataFrame
df = pd.read_excel('Confiabilidad.xlsx')
df['SISTEMA'] = df['SISTEMA'].str.capitalize()
# Calcular la cantidad de datos y los sistemas
cantidadDatos = len(df.SISTEMA.value_counts())
sistemas = df.SISTEMA.value_counts()

# Agrupar los datos por el nombre del sistema y calcular la media de criticidad
grouped_df = pd.DataFrame({'SISTEMA':[],'CRITICIDAD':[]})
for i in range(0,len(sistemas)):
    indices = sistemas.index[i]
    df_temp = df.SISTEMA == indices
    sistemas_temp = df[df_temp]
    criticidadTemp = sistemas_temp.CRITICIDAD.mean()
    nuevaFila = pd.Series({'SISTEMA':indices,'CRITICIDAD':criticidadTemp})
    
    grouped_df.loc[len(grouped_df)] = nuevaFila
    
# Ordenar los sistemas por su criticidad acumulada
sorted_df = grouped_df.sort_values(by='CRITICIDAD', ascending=False)

# Calcular las frecuencias relativas de cada valor
relative_freq = sorted_df.CRITICIDAD / sorted_df.CRITICIDAD.sum()

# Calcular las frecuencias acumuladas y las frecuencias relativas acumuladas
cumulative_freq = relative_freq.cumsum()
cumulative_rel_freq = cumulative_freq / cumulative_freq.max()*100

# Crear un gráfico de barras con las frecuencias relativas
fig, ax1 = plt.subplots()
ax1.bar(sorted_df.SISTEMA, sorted_df.CRITICIDAD, color='orange')
ax1.set_title('Criticidad en sistemas de aeronave', fontweight='bold')
ax1.set_xlabel('Sistemas')
ax1.set_ylabel('Nivel Criticidad')
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
plt.savefig('diagramaParetoConfiabilidadJABG.png')


# Mostrar el gráfico
plt.show()
