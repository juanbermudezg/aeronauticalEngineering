import pandas as pd
import numpy as np
from datetime import datetime
import random

ruta_archivo = 'aviation-accident-data-2023-05-16.csv'
df = pd.read_csv(ruta_archivo)
cadenas = []
meses = {
    'JAN': '01',
    'FEB': '02',
    'MAR': '03',
    'APR': '04',
    'MAY': '05',
    'JUN': '06',
    'JUL': '07',
    'AUG': '08',
    'SEP': '09',
    'OCT': '10',
    'NOV': '11',
    'DEC': '12'
}
for i in range (len(df)):
    if i < len(df):
        a = df.iloc[i]['date']
        a = a.split(',')[0]
        a=a.replace('??','01')
        a=a.replace('???',str(random.randint(1,12)))
        for mes, numero in meses.items():
            a=a.replace(mes,numero)
        
        if '???' in a:
            print(a)
            df = df.drop(i)
        try:
            fecha = datetime.strptime(a, "%d-%m-%Y")
            nueva_cadena = datetime.strftime(fecha, "%m-%d-%Y")
        except:
            pass
    cadenas.append(nueva_cadena)
df2 = pd.DataFrame(cadenas, columns=['Date'])
print(df2)
df2['Date'] = pd.to_datetime(df2['Date'])
df2 = df2.sort_values('Date')
path_Final_DataBase = 'dataBaseWorld.csv'
df2.to_csv(path_Final_DataBase, index=False)