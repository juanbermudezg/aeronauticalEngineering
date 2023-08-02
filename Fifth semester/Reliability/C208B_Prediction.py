#manejo de datos
import numpy as np
import pandas as pd
#manejo de visual
import matplotlib.pyplot as plt
import matplotlib.ticker as ticker
import hvplot.pandas
import seaborn as sns
from statsmodels.graphics.tsaplots import plot_acf
from statsmodels.graphics.tsaplots import plot_pacf
import plotly.express as px
import plotly.graph_objects as go
#modelacion arima
from statsmodels.tsa.statespace.sarimax import SARIMAX
from statsmodels.graphics.tsaplots import plot_acf,plot_pacf
from statsmodels.tsa.seasonal import seasonal_decompose
from statsmodels.tsa.stattools import adfuller #mirar si es estacionaria
#modelo auto-arima
from pmdarima import auto_arima
#métrica de evaluación
from sklearn.metrics import mean_squared_error
from statsmodels.tools.eval_measures import rmse
from sklearn import metrics
#prevención de advertencias
import warnings
#demas librerias
from datetime import datetime

#-----------------Just the prediction of ATR 42 of the Colombian Naval Aviation-----------------#

warnings.filterwarnings('ignore')
plt.style.use('fivethirtyeight')
plt.rcParams['lines.linewidth']=1.5
dark_Style={
    'figure.facecolor' : '#212946',
    'axes.facecolor' : '#212946',
    'savefig.facecolor' : '#212946',
    'axes.grid' : True,
    'axes.grid.which' : 'both',
    'axes.spines.left' : False,
    'axes.spines.right' : False,
    'axes.spines.top' : False,
    'axes.spines.bottom' : False,
    'grid.color' : '#2A3459',
    'grid.linewidth' : '1',
    'text.color' : '0.9',
    'axes.labelcolor' : '0.9',
    'xtick.color' : '0.9',
    'ytick.color' : '0.9',
    'font.size' : 12}
plt.rcParams.update(dark_Style)

def evaluacion_modelo(y_true,y_pred):
    def mean_absolute_percentage_error(y_true,y_pred):
        y_true, y_pred = np.array(y_true), np.array(y_pred)
        return np.mean(np.abs((y_true-y_pred)/y_true))*100
    print("Evaluación del modelo: ")
    print(f'MSE is : {metrics.mean_squared_error(y_true,y_pred)}')
    print(f'MAE is : {metrics.mean_absolute_error(y_true,y_pred)}')
    print(f'RMSE is : {np.sqrt(metrics.mean_squared_error(y_true,y_pred))}')
    print(f'MAPE is : {metrics.mean_absolute_percentage_error(y_true,y_pred)}')
    print(f'R2 is : {metrics.r2_score(y_true,y_pred)}',end='\n\n')
def Prueba_Dickey_Fuller(series , column_name):
    print (f'Resultados de la prueba de Dickey-Fuller para columna: {column_name}')
    dftest = adfuller(series, autolag='AIC')
    dfoutput = pd.Series(dftest[0:4], index=['Test Statistic','p-value','No Lags Used','Número de observaciones utilizadas'])
    for key,value in dftest[4].items():
       dfoutput['Critical Value (%s)'%key] = value
    print (dfoutput)
    if dftest[1] <= 0.05:
        print("Conclusion:====>")
        print("Rechazar la hipótesis nula")
        print("Los datos son estacionarios")
    else:
        print("Conclusion:====>")
        print("No se puede rechazar la hipótesis nula")
        print("Los datos no son estacionarios")
df = pd.read_csv('dataBaseWorld-FINAL.csv')
df['Date']=pd.to_datetime(df['Date'])
df=df.set_index('Date')
df.index.freq='MS'
figATR = px.line(df, x=df.index, y='Number_of_incidents', template="plotly_dark", title="ATR 42 Frequency of Accidents by Month of the NAVY")
figATR.show()
#Prueba_Dickey_Fuller(df['Number_of_incidents'],'Number_of_incidents') #the data are NOT stationary

dfE=df.copy()
#Take first difference
dfE['Incidents_diff']=df['Number_of_incidents'].diff()
#Removiendo los datos nulos
dfE.dropna(inplace=True)
#print(dfE.head())
Prueba_Dickey_Fuller(dfE['Incidents_diff'],'Number_of_incidents') #Los datos son estacionarios
figATR = px.line(dfE, x=dfE.index, y='Number_of_incidents', template="plotly_dark", title="ATR 42 Frequency of Accidents by Month of the NAVY")
figATR.show()
train_dataATR42=dfE[:len(dfE)-5]
test_data=dfE[len(dfE)-5:]
test=test_data.copy()
print(train_dataATR42)
modelo_auto=auto_arima(train_dataATR42,start_p=0,d=1,start_q=0,
          max_p=4,max_d=2,max_q=4, start_P=0,
          D=1, start_Q=0, max_P=2,max_D=1,
          max_Q=2, m=12, seasonal=True,
          error_action='warn',trace=True,
          supress_warnings=True,stepwise=True,
          random_state=20,n_fits=50)
'''
arima_model = SARIMAX(train_dataATR42["Number_of_incidents"], order = (0,1,1), seasonal_order = (0,1,1,12)) 
arima_result = arima_model.fit() 
arima_result.summary()
arima_pred=arima_result.predict(start=len(train_dataATR42),end=len(df)-1,typ="levels").rename("ARIMA Predictions")
print(arima_result.summary())
arima_pred2 = arima_result.predict(start='2018-01-01',end='2025-01-01', typ="levels").rename("ARIMA Predictions")
print(arima_pred2)

#plt.style.use('dark_background')
plt.rcParams["figure.figsize"] = (20, 8)

plt.plot(test_data["Number_of_incidents"], label="Actual_number_of_incidents")
plt.plot(arima_pred, color="lime", label="Predicciones")
plt.title("Predicción con Modelo Arima", fontsize=30)
plt.xlabel('Meses')
plt.ylabel('')
plt.legend( fontsize=16)
plt.show()

plt.style.use('seaborn')
plt.rcParams["figure.figsize"] = (20, 8)

plt.plot(test_data["Number_of_incidents"],color="blue" ,label="Number_of_incidents1")
plt.plot(arima_pred2, color="lime", label="Predicciones")
plt.title("Predicción con Modelo Arima", fontsize=30)
plt.xlabel('Meses')
plt.ylabel('')
plt.legend( fontsize=16)
plt.show()
evaluacion_modelo(test_data,arima_pred)
test_data['ARIMA_Predictions'] = arima_pred
print(test_data)

aic = arima_result.aic
bic = arima_result.bic

print("AIC:", aic)
print("BIC:", bic)'''