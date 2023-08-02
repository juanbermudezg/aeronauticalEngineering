import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import calendar
import itertools
'''
months = {i: calendar.month_abbr[i] for i in range(1, 13)}

df_ATR42=pd.read_csv('dataBaseColombianAviationNavy_ATR42.csv')
df_ATR42['Date'] = pd.to_datetime(df_ATR42['Date'])
df_ATR42['Month'] = df_ATR42['Date'].dt.month
Frequency_of_Accidents_ATR42 = df_ATR42.groupby('Month').size().reset_index(name='Number_of_incidents')
Frequency_of_Accidents_ATR42['Month'] = Frequency_of_Accidents_ATR42['Month'].map(months)

plt.bar(Frequency_of_Accidents_ATR42['Month'], Frequency_of_Accidents_ATR42['Number_of_incidents'])
plt.xlabel('Month')
plt.ylabel('Frequency of Accidents')
plt.title('ATR 42 Frequency of Accidents by Month of the NAVY')
plt.show()
'''

#-----------------ATR 42 of the Colombian Naval Aviation-----------------#

df_ATR42=pd.read_csv('dataBaseColombianAviationNavy_ATR42.csv')
df_ATR42['Date'] = pd.to_datetime(df_ATR42['Date'])
df_ATR42['Year'] = df_ATR42['Date'].dt.year
df_ATR42['Month'] = df_ATR42['Date'].dt.month
Frequency_of_Accidents_ATR42 = df_ATR42.groupby(['Year', 'Month']).size().reset_index(name='Number_of_incidents')
Frequency_of_Accidents_ATR42 = Frequency_of_Accidents_ATR42.sort_values(['Year', 'Month'])
sinceYear_ATR42=Frequency_of_Accidents_ATR42.Year.min()
untilYear_ATR42=Frequency_of_Accidents_ATR42.Year.max()
ATR42_Years = range(sinceYear_ATR42, untilYear_ATR42+1)
ATR42_Months = range(1, 13)
combinations_ATR42 = list(itertools.product(ATR42_Years, ATR42_Months))
df_aux_ATR42 = pd.DataFrame(combinations_ATR42, columns=['Year', 'Month'])
df_final_atr42 = df_aux_ATR42.merge(Frequency_of_Accidents_ATR42, on=['Year', 'Month'], how='left', indicator=True)
df_final_atr42['Number_of_incidents'] = df_final_atr42['Number_of_incidents'].fillna(0)
df_final_atr42['Date'] = pd.to_datetime(df_final_atr42[['Year', 'Month']].assign(day=1))
df_final_atr42['Date'] = pd.to_datetime(df_final_atr42['Date'])
df_final_atr42 = df_final_atr42.drop(['_merge', 'Year', 'Month'], axis=1)
path_ATR42_NAVY = 'dataBaseColombianAviationNavy_ATR42-FINAL.csv'
df_final_atr42.to_csv(path_ATR42_NAVY, index=False)

#-----------------C-90 of the Colombian Naval Aviation-----------------#

df_C90=pd.read_csv('dataBaseColombianAviationNavy_C90.csv')
df_C90['Date'] = pd.to_datetime(df_C90['Date'])
df_C90['Year'] = df_C90['Date'].dt.year
df_C90['Month'] = df_C90['Date'].dt.month
Frequency_of_Accidents_C90 = df_C90.groupby(['Year', 'Month']).size().reset_index(name='Number_of_incidents')
Frequency_of_Accidents_C90 = Frequency_of_Accidents_C90.sort_values(['Year', 'Month'])
sinceYear_C90=Frequency_of_Accidents_C90.Year.min()
untilYear_C90=Frequency_of_Accidents_C90.Year.max()
C90_Years = range(sinceYear_C90, untilYear_C90+1)
C90_Months = range(1, 13)
combinations_C90 = list(itertools.product(C90_Years, C90_Months))
df_aux_C90 = pd.DataFrame(combinations_C90, columns=['Year', 'Month'])
df_final_C90 = df_aux_C90.merge(Frequency_of_Accidents_C90, on=['Year', 'Month'], how='left', indicator=True)
df_final_C90['Number_of_incidents'] = df_final_C90['Number_of_incidents'].fillna(0)
df_final_C90['Date'] = pd.to_datetime(df_final_C90[['Year', 'Month']].assign(day=1))
df_final_C90['Date'] = pd.to_datetime(df_final_C90['Date'])
df_final_C90 = df_final_C90.drop(['_merge', 'Year', 'Month'], axis=1)
path_C90_NAVY = 'dataBaseColombianAviationNavy_C90-FINAL.csv'
df_final_C90.to_csv(path_C90_NAVY, index=False)

#-----------------C-208B Grand Caravan of the Colombian Naval Aviation-----------------#


df_C208B=pd.read_csv('dataBaseColombianAviationNavy_C208B.csv')
df_C208B['Date'] = pd.to_datetime(df_C208B['Date'])
df_C208B['Year'] = df_C208B['Date'].dt.year
df_C208B['Month'] = df_C208B['Date'].dt.month
Frequency_of_Accidents_C208B = df_C208B.groupby(['Year', 'Month']).size().reset_index(name='Number_of_incidents')
Frequency_of_Accidents_C208B = Frequency_of_Accidents_C208B.sort_values(['Year', 'Month'])
sinceYear_C208B=Frequency_of_Accidents_C208B.Year.min()
untilYear_C208B=Frequency_of_Accidents_C208B.Year.max()
C208B_Years = range(sinceYear_C208B, untilYear_C208B+1)
C208B_Months = range(1, 13)
combinations_C208B = list(itertools.product(C208B_Years, C208B_Months))
df_aux_C208B = pd.DataFrame(combinations_C208B, columns=['Year', 'Month'])
df_final_C208B = df_aux_C208B.merge(Frequency_of_Accidents_C208B, on=['Year', 'Month'], how='left', indicator=True)
df_final_C208B['Number_of_incidents'] = df_final_C208B['Number_of_incidents'].fillna(0)
df_final_C208B['Date'] = pd.to_datetime(df_final_C208B[['Year', 'Month']].assign(day=1))
df_final_C208B['Date'] = pd.to_datetime(df_final_C208B['Date'])
df_final_C208B = df_final_C208B.drop(['_merge', 'Year', 'Month'], axis=1)
path_C208B_NAVY = 'dataBaseColombianAviationNavy_C208B-FINAL.csv'
df_final_C208B.to_csv(path_C208B_NAVY, index=False)
'''

df_C208B=pd.read_csv('dataBaseColombianAviationNavy_TotalAirplanes.csv')
df_C208B['Date'] = pd.to_datetime(df_C208B['Date'])
df_C208B['Year'] = df_C208B['Date'].dt.year
df_C208B['Month'] = df_C208B['Date'].dt.month
Frequency_of_Accidents_C208B = df_C208B.groupby(['Year', 'Month']).size().reset_index(name='Number_of_incidents')
Frequency_of_Accidents_C208B = Frequency_of_Accidents_C208B.sort_values(['Year', 'Month'])
sinceYear_C208B=Frequency_of_Accidents_C208B.Year.min()+1
untilYear_C208B=Frequency_of_Accidents_C208B.Year.max()-1
C208B_Years = range(sinceYear_C208B, untilYear_C208B+1)
C208B_Months = range(1, 13)
combinations_C208B = list(itertools.product(C208B_Years, C208B_Months))
df_aux_C208B = pd.DataFrame(combinations_C208B, columns=['Year', 'Month'])
df_final_C208B = df_aux_C208B.merge(Frequency_of_Accidents_C208B, on=['Year', 'Month'], how='left', indicator=True)
df_final_C208B['Number_of_incidents'] = df_final_C208B['Number_of_incidents'].fillna(0)
df_final_C208B['Date'] = pd.to_datetime(df_final_C208B[['Year', 'Month']].assign(day=1))
df_final_C208B['Date'] = pd.to_datetime(df_final_C208B['Date'])
df_final_C208B = df_final_C208B.drop(['_merge', 'Year', 'Month'], axis=1)
path_C208B_NAVY = 'dataBaseColombianAviationNavy_totalAirplanes-FINAL.csv'
df_final_C208B.to_csv(path_C208B_NAVY, index=False)'''