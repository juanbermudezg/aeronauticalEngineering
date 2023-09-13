def calcularMatch(AE, AG, gamma):
    text=f"Valores match para {AE}"
    count=0
    sublist=[]
    j=0
    sublist.append(text)
    while count<2:
        j+=0.001
        valor=(((AE/AG)*j)**((2*(gamma-1))/(gamma+1)))-(2/(gamma+1))-((gamma-1)/(gamma+1))*j**2
        valor = round(valor,3)
        if valor==0:
            sublist.append(round(j,2))
            count+=1
            j+=0.1
    return sublist
    
def calcularAreaGarganta(AG, MG, gamma):
    AM=(AG)/((((2/(gamma+1))*(1+((gamma-1)/2)*(MG)**2))**((gamma+1)/(2*(gamma-1))))/(MG))
    return AM

AG=calcularAreaGarganta(500,0.4,1.3) #area de entrada, match de entrada, gamma
macthCalculado=calcularMatch(500,AG,1.3) #area de entrada, area de garganta, gamma
print(macthCalculado)