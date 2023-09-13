'''
ESAVE
'''
def motores(AG, MG, AH, stepAreas, gamma):
    '''gamma=float(1.3)
    AG=500
    MG=0.4
    AH=400'''
    AM=(AG)/((((2/(gamma+1))*(1+((gamma-1)/2)*(MG)**2))**((gamma+1)/(2*(gamma-1))))/(MG))

    AM=round(AM, 2)
    areas=[]
    while AG>=AM:
        areas.append(AG)
        AG=AG-stepAreas #-10
    areas.append(AM)
    print(areas[::-1])
    resultados=[]
    for i in areas:
        text=f"Valores match para {i}"
        count=0
        sublist=[]
        j=0
        sublist.append(text)
        while count<2:
            j+=0.001
            valor=((j*(i/AM))**((2*(gamma-1))/(gamma+1)))-(2/(gamma+1))-((gamma-1)/((gamma+1)*2)*(j)**2)
        
            valor = round(valor,3)
        
            if valor==0:
                sublist.append(round(j,2))
                count+=1
                j+=0.5

        resultados.append(sublist)
    print(resultados[::-1])
motores(500,0.4,400,20,1.3)