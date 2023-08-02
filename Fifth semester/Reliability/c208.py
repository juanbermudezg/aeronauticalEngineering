import pandas as pd
import plotly.express as px
import matplotlib.pyplot as plt
from sklearn.preprocessing import MinMaxScaler
from sklearn.preprocessing import StandardScaler

import numpy as np
df5 = pd.read_csv("dataBaseColombianAviationNavy_C208B-FINAL.csv")
df5['Number_of_incidents_change']= df5['Number_of_incidents'].pct_change()
df5.dropna(inplace=True)
df5.head()
'''
print(df5.head())
fig = px.line(df5, x="Date", y="Number_of_incidents",template = "plotly_dark",
              title="Porcentaje de Cambio")
fig.show()
df5['Number_of_incidents'].plot(kind='kde',figsize = (16,5))
plt.show()'''
# Variables de estacionalidad
df5['Month'] = pd.to_datetime(df5['Date'])
df5['Year'] = df5['Month'].apply(lambda x: x.year)
df5['Mes'] = df5['Month'].apply(lambda x: x.month)
# Agregar un año de datos retrasados
df5['L1'] = df5["Number_of_incidents_change"].shift(1)
df5['L2'] = df5["Number_of_incidents_change"].shift(2)
df5['L3'] = df5["Number_of_incidents_change"].shift(3)
df5['L4'] = df5["Number_of_incidents_change"].shift(4)
df5['L5'] = df5["Number_of_incidents_change"].shift(5)
df5['L6'] = df5["Number_of_incidents_change"].shift(6)
df5['L7'] = df5["Number_of_incidents_change"].shift(7)
df5['L8'] = df5["Number_of_incidents_change"].shift(8)
df5['L9'] = df5["Number_of_incidents_change"].shift(9)
df5['L10'] = df5["Number_of_incidents_change"].shift(10)
df5['L11'] = df5["Number_of_incidents_change"].shift(11)
df5['L12'] = df5["Number_of_incidents_change"].shift(12)

df5 = df5.dropna()
df5= df5.set_index("Month")

# dividir en variables rezagadas (características) y datos de series de tiempo originales (objetivo)
X2= df5.iloc[:,2:] # dividir todas las filas y comenzar con la columna 0 y subir hasta la última columna, pero sin incluirla
y2 = df5.iloc[:,1] # dividir todas las filas y la última columna, esencialmente separando la columna 't'


# Target Train-Test split
from pandas import read_csv

Y2 = y2
traintarget_size = int(len(Y2) * 0.80)   # Set split
train_target, test_target = Y2[0:traintarget_size], Y2[traintarget_size:len(Y2)]

print('Observaciones para el objetivo: %d' % (len(Y2)))
print('Observaciones de entrenamiento para el objetivo: %d' % (len(train_target)))
print('Observaciones de prueba para el objetivo: %d' % (len(test_target)))

# Features Train-Test split

trainfeature_size = int(len(X2) * 0.80)
train_feature, test_feature = X2[0:trainfeature_size], X2[trainfeature_size:len(X2)]
print(train_feature)
print('Observaciones para la característica: %d' % (len(X2)))
print('Observaciones de entrenamiento para la característica: %d' % (len(train_feature)))
print('Observaciones de prueba para la característica: %d' % (len(test_feature)))

# Creando Train test split
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X2, y2, test_size=0.2,  shuffle=False)
# Limpiar los datos problemáticos
train_feature_clean = train_feature.replace([np.inf, -np.inf], np.nan)
train_feature_clean = train_feature_clean.dropna()
train_target_clean = train_target[train_feature_clean.index]
print(train_feature_clean)
# Convertir columnas de fecha a características numéricas
train_feature_clean['Fecha_ordinal'] = train_feature_clean['Mes'].apply(lambda x: pd.to_datetime(x).toordinal())

# Verificar y normalizar los datos de entrada si es necesario
if train_feature_clean.dtypes.all() == np.number and train_target_clean.dtypes.all() == np.number:
    if np.max(train_feature_clean.values) > 1e6 or np.max(train_target_clean.values) > 1e6:
        scaler = StandardScaler()
        train_feature_clean = scaler.fit_transform(train_feature_clean)
        train_target_clean = scaler.transform(train_target_clean)
# Random Forest
from sklearn.ensemble import RandomForestRegressor

# Creamos el modelo con 500 árboles
rfr = RandomForestRegressor(n_estimators=500)

# Entrenamos el modelo
rfr.fit(train_feature_clean, train_target_clean)

# Hacemos las predicciones 
fcst = rfr.predict(test_feature)
b=pd.DataFrame({"Actual":test_target, "Random Forest":fcst})

print(b)
