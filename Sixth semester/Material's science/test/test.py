import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_excel('data.xlsx')
df = df.drop(columns=['LONGITUD INICIAL (mm)', 50, 'CARGA (N)', 'DESPLAZAMIENTO (mm)', 'Pendiente'], axis=0)
esfuerzo=[]
tension=[]
temp=[]
for i in range(len(df['esfuerzo'])):
    df['esfuerzo'][i]=round(df['esfuerzo'][i],2)
    try:
        if (df['esfuerzo'][i]==df['esfuerzo'][i-1]):
            temp.append(df['tension'][i])
            
        else: 
            tempMean=sum(temp)/len(temp)
            tempMean=round(tempMean,3)
            tension.append(tempMean)
            temp=[]
            esfuerzo.append(df['esfuerzo'][i-1])
    except:
        pass  
plt.plot(esfuerzo, tension, label='Datos')
plt.xlabel('ε (mm/mm)')
plt.ylabel('σ (N/m^2)')
plt.title('Gráfico de esfuerzo vs. deformación')
plt.legend()
plt.show()

dfFinal = pd.DataFrame({'Esfuerzo': esfuerzo, 'Tension': tension})
dfFinal.to_excel('data4.xlsx', index=False)