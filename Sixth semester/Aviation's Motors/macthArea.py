'''

'''

gamma=float(1.3)
AG=500
MG=0.4
AH=400
AM=(AG)/((((2/(gamma+1))*(1+((gamma-1)/2)*(MG)**2))**((gamma+1)/(2*(gamma-1))))/(MG))
M=1
AM=round(AM, 2)
areas=[]
while AG>=AM:
    areas.append(AG)
    AG=AG-10
areas.append(AM)
print(areas)
resultados=[]
for i in areas:
    count=0
    sublist=[]
    j=0
    while count<3:
        valor=((j*i/AM)**((2*(gamma-1))/(gamma+1)))-(2/(gamma+1))-(((gamma-1)/(gamma+1))*j**2)
        if round(valor,2)==0:
            sublist.append(valor)
            count+=1
        resultados.append(sublist)
print(resultados)