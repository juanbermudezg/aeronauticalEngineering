import pandas as pd
import numpy as np
bd=pd.read_csv('dataBaseColombianAviationNavyTotal.csv')

ATR42_NAVY_temp = bd.Aeronave=='ATR-42'
ATR42_NAVY=bd[ATR42_NAVY_temp]
ATR42_NAVY['Date'] = pd.to_datetime(ATR42_NAVY['Date'])
ATR42_NAVY = ATR42_NAVY.sort_values('Date')
path_ATR42_NAVY = 'dataBaseColombianAviationNavy_ATR42.csv'
ATR42_NAVY.to_csv(path_ATR42_NAVY, index=False)

C90_NAVY_temp = bd.Aeronave=='C-90'
C90_NAVY=bd[C90_NAVY_temp]
C90_NAVY['Date'] = pd.to_datetime(C90_NAVY['Date'])
C90_NAVY = C90_NAVY.sort_values('Date')
path_C90_NAVY = 'dataBaseColombianAviationNavy_C90.csv'
C90_NAVY.to_csv(path_C90_NAVY, index=False)

C208B_NAVY_temp=bd.Aeronave=='C-208'
C208B_NAVY=bd[C208B_NAVY_temp]
C208B_NAVY['Date'] = pd.to_datetime(C208B_NAVY['Date'])
C208B_NAVY = C208B_NAVY.sort_values('Date')
path_C208B_NAVY = 'dataBaseColombianAviationNavy_C208B.csv'
C208B_NAVY.to_csv(path_C208B_NAVY, index=False)

NAVY=bd.copy()
bd['Date'] = pd.to_datetime(NAVY['Date'])
NAVY = NAVY.sort_values('Date')
path_NAVY = 'dataBaseColombianAviationNavy_TotalAirplanes.csv'
NAVY.to_csv(path_NAVY, index=False)
