import pandas as pd
import math
import numpy as np
import matplotlib.pyplot as plt


D:float = 0.124 #diameter in m
density:float = 1.23 #density in kg/m^3
V:float = 10 #velocity in m/s
def leerExcel(path:str)->pd.core.frame.DataFrame:
    try:
        df:pd.core.frame.DataFrame = pd.read_excel(path)
        return df
    except:
        raise Exception
def calcularJ (revolutions:float, V:float, D:float)->float:
    J:float = V/(revolutions*D)
    return J
def calcularCt (revolutions:float)->float:
    df = leerExcel('finalCode/bd.xlsx')
    r_bd:str = 'radio desde el centro (cm)'
    Cl_bd:str = 'Cl'
    Cd_bd:str = 'Cd'
    a_bd:str = 'a'
    Cl:list = [] #lift coefficient for a blade
    Cl = df[Cl_bd].tolist()
    Cd:list = [] #drag coefficient for a blade
    Cd = df[Cd_bd].tolist()
    a:list = df[a_bd].tolist() #a from Cl vs alpha
    nB:int = 2 #number of blades
    J:float = calcularJ(revolutions, V, D) #advance ratio
    R:float = 0.0647 #total radius in m
    r:list = [] #partial radius in m
    r = [r_temp/100 for r_temp in df[r_bd].tolist()]
    x:list = [round(r_temp / R,3) for r_temp in r] #radius relation
    c:list = [] #chord in m
    c = [round((-182.22*x_temp**6+679.69*x_temp**5-995.96*x_temp**4+724.61*x_temp**3-275.32*x_temp**2+52.759*x_temp-2.7703)/100,5) for x_temp in x]
    P:float = 4.6/39.37 #pitch length
    B:list = [] #pitch angle in degrees
    B = [math.degrees(math.atan((P*D)/(math.pi*x_temp))) for x_temp in x]
    solidity:list = [] #
    solidity = [((nB*c_temp)/(math.pi*R)) for c_temp in c]
    angularVelocity:float = revolutions*2*math.pi #angular velocity in rad/s
    lambdaV:float = V/(angularVelocity*R) #lambda λ
    Vt:float = angularVelocity*R #velocity at tip in m/s
    Vr = [Vt*math.sqrt(x_temp**2+lambdaV**2) for x_temp in x]
    phi:float = [math.degrees(math.atan(lambdaV/(math.pi*x_temp))) for x_temp in x] #phi Φ
    inducedAlpha = []
    for x_temp, solidity_temp, a_temp, Vr_temp, B_temp, phi_temp in zip(x, solidity, a, Vr, B, phi):
        term1 = (lambdaV / x_temp) + ((solidity_temp * a_temp * Vr_temp) / (8 * x_temp**2 * Vt))
        term2 = ((solidity_temp * a_temp * Vr_temp) / (2 * x_temp**2 * Vt)) * (B_temp - phi_temp)
        discriminant = term1**2 + term2
        if discriminant < 0:
            continue
        root_term = math.sqrt(discriminant)
        alpha = 1 / 2 * (-term1 + root_term)
        inducedAlpha.append(alpha)
    def f(x_int, solidity_int, Cl_int, phi_int, inducedAlpha_int, Cd_int):
        return (J*np.exp(2)+np.pi*np.exp(2)*x_int)*solidity_int*(Cl_int*np.cos(phi_int+inducedAlpha_int)-Cd_int*np.sin(phi_int+inducedAlpha_int))
    Ct:list = []
    for solidity_int, Cl_int, phi_int, inducedAlpha_int, Cd_int in zip(solidity, Cl, phi, inducedAlpha, Cd):
        integral = np.trapz([f(x_int, solidity_int, Cl_int, phi_int, inducedAlpha_int, Cd_int) for x_int in x], x)
        Ct.append(integral)
    x_int = np.mean(Ct)
    return x_int
def calcularCp (revolutions:float)->float:
    archivo_excel:str = 'finalCode/bd.xlsx'
    df:pd.core.frame.DataFrame = pd.read_excel(archivo_excel)
    r_bd:str = 'radio desde el centro (cm)'
    Cl_bd:str = 'Cl'
    Cd_bd:str = 'Cd'
    a_bd:str = 'a'
    #revolutions:float = 3000  # revolutions in rev/s
    Cl:list = [] #lift coefficient for a blade
    Cl = df[Cl_bd].tolist()
    Cd:list = [] #drag coefficient for a blade
    Cd = df[Cd_bd].tolist()
    a:list = df[a_bd].tolist() #a from Cl vs alpha
    nB:int = 2 #number of blades
    J:float = calcularJ(revolutions, V, D) #advance ratio
    R:float = 0.0647 #total radius in m
    r:list = [] #partial radius in m
    r = [r_temp/100 for r_temp in df[r_bd].tolist()]
    x:list = [round(r_temp / R,3) for r_temp in r] #radius relation
    c:list = [] #chord in m
    c = [round((-182.22*x_temp**6+679.69*x_temp**5-995.96*x_temp**4+724.61*x_temp**3-275.32*x_temp**2+52.759*x_temp-2.7703)/100,5) for x_temp in x]
    P:float = 4.6/39.37 #pitch length
    B:list = [] #pitch angle in degrees
    B = [math.degrees(math.atan((P*D)/(math.pi*x_temp))) for x_temp in x]
    solidity:list = [] #
    solidity = [((nB*c_temp)/(math.pi*R)) for c_temp in c]
    angularVelocity:float = revolutions*2*math.pi #angular velocity in rad/s
    lambdaV:float = V/(angularVelocity*R) #lambda λ
    Vt:float = angularVelocity*R #velocity at tip in m/s
    Vr = [Vt*math.sqrt(x_temp**2+lambdaV**2) for x_temp in x]
    phi:float = [math.degrees(math.atan(lambdaV/(math.pi*x_temp))) for x_temp in x] #phi Φ
    inducedAlpha = []
    for x_temp, solidity_temp, a_temp, Vr_temp, B_temp, phi_temp in zip(x, solidity, a, Vr, B, phi):
        term1 = (lambdaV / x_temp) + ((solidity_temp * a_temp * Vr_temp) / (8 * x_temp**2 * Vt))
        term2 = ((solidity_temp * a_temp * Vr_temp) / (2 * x_temp**2 * Vt)) * (B_temp - phi_temp)
        discriminant = term1**2 + term2
        if discriminant < 0:
            continue
        root_term = math.sqrt(discriminant)
        alpha = 1 / 2 * (-term1 + root_term)
        inducedAlpha.append(alpha)
    a = x[0] 
    b = x[::-1] 
    def f(x_int, solidity_int, Cl_int, phi_int, inducedAlpha_int, Cd_int):
        return (J*np.exp(2)+np.pi*np.exp(2)*x_int)*solidity_int*(Cl_int*np.sin(phi_int+inducedAlpha_int)+Cd_int*np.cos(phi_int+inducedAlpha_int))
    Cp:list = []
    for solidity_int, Cl_int, phi_int, inducedAlpha_int, Cd_int in zip(solidity, Cl, phi, inducedAlpha, Cd):
        integral = np.trapz([f(x_int, solidity_int, Cl_int, phi_int, inducedAlpha_int, Cd_int) for x_int in x], x)
        Cp.append(integral)
    x_int = np.mean(Cp)  
    return x_int
revolutions_list:list = np.linspace(100, 333.33, 50)
J_list:list = [calcularJ(revolutions_list_temp, V, D) for revolutions_list_temp in revolutions_list]
print(J_list)
Ct_list:list = [calcularCt(revolutions_list_temp) for revolutions_list_temp in revolutions_list]
Cp_list:list = [calcularCp(revolutions_list_temp) for revolutions_list_temp in revolutions_list]

plt.plot(J_list, Ct_list)
plt.title('Ct vs. J')
plt.xlabel('J')
plt.ylabel('Ct')
plt.show()

plt.plot(J_list, Cp_list)
plt.title('Cp vs. J')
plt.xlabel('J')
plt.ylabel('Cp')
plt.show()
