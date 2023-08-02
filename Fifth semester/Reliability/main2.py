import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import calendar
import itertools

df_C208B=pd.read_csv('dataBaseWorld.csv')
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
path_C208B_NAVY = 'dataBaseWorld-FINAL.csv'
df_final_C208B.to_csv(path_C208B_NAVY, index=False)