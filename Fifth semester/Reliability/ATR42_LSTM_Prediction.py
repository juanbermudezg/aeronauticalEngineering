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
#modelacion LSTM
from sklearn.preprocessing import MinMaxScaler
from keras.preprocessing.sequence import TimeseriesGenerator
from keras.models import Sequential
from keras.layers import Dense
from keras.layers import LSTM
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
df = pd.read_csv('dataBaseColombianAviationNavy_ATR42-FINAL.csv')
df['Date']=pd.to_datetime(df['Date'])
df=df.set_index('Date')

train_dataATR42=df[:len(df)-5]
test_data=df[len(df)-5:]
test=test_data.copy()


scaler=MinMaxScaler()

scaler.fit_transform(train_dataATR42)
scaled_train_data=scaler.transform(train_dataATR42)
scaled_test_data=scaler.transform(test)

n_input = 12
n_features= 1
generator = TimeseriesGenerator(scaled_train_data, scaled_train_data, length=n_input, batch_size=1)

lstm_model = Sequential()
lstm_model.add(LSTM(200, activation='relu', input_shape=(n_input, n_features)))
lstm_model.add(Dense(1))
lstm_model.compile(optimizer='adam', loss='mse')

print(lstm_model.summary())
lstm_model.fit_generator(generator,epochs=1000)
losses_lstm = lstm_model.history.history['loss']
#plt.figure(figsize=(12,4))
plt.xticks(np.arange(0,21,1))
plt.plot(range(len(losses_lstm)),losses_lstm)

lstm_predictions_scaled = list()

batch = scaled_train_data[-n_input:]
current_batch = batch.reshape((1, n_input, n_features))

for i in range(len(test_data)):   
    lstm_pred = lstm_model.predict(current_batch)[0]
    lstm_predictions_scaled.append(lstm_pred) 
    current_batch = np.append(current_batch[:,1:,:],[[lstm_pred]],axis=1)

lstm_predictions = scaler.inverse_transform(lstm_predictions_scaled)
test_data['LSTM_Predictions'] = lstm_predictions
ai=test_data[["Number_of_incidents","LSTM_Predictions"]]
fig = px.line(ai, x=test_data.index, y=ai.columns,title="Predicción con Modelo LSTM", template = "plotly_dark")
fig.show()
