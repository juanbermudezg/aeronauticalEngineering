import pandas as pd
import matplotlib.pyplot as plt

archivo_excel:str = 'finalCode/datosExperimentales.xlsx'
df:pd.core.frame.DataFrame = pd.read_excel(archivo_excel)
J_bd:str = 'J'
Ct_bd:str = 'Ct'

V:float = 20 #velocity in m/s
Ct:list = df[Ct_bd].tolist() #thrus coefficient
D:float = 0.124 #diameter in m
ρ:float = 1.23 #density in kg/m^3
J:list = df[J_bd].tolist()
n:list = [V/(J_temp*D) for J_temp in J]
T:list =  [Ct_temp*(ρ*n_temp**2*D**4) for Ct_temp, n_temp in zip(Ct, n)]#Thrust in N

plt.plot(J, T)
plt.title('T vs. J Experimentales')
plt.xlabel('J')
plt.ylabel('T (N)')
plt.show()

plt.plot(J, Ct)
plt.title('Ct vs. J Experimentales')
plt.xlabel('J')
plt.ylabel('Ct')
plt.show()