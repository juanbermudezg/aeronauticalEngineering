import math
'''Taller Hidráulica segundo corte
1.	Una bomba de pistón, el cual contiene 8 pistones de diámetro de cabeza de 15mm
a una distancia del eje central de 4 cm. Determinar el caudal medio descargado por
la bomba se acciona a una velocidad angular de 300 RPM, tiene una eficiencia de 92%
y se encuentra en una configuración donde el plato oscilante tiene un ángulo de 30°.
'''
#Script realizado por Juan Andrés Bermúdez Gómez, estudiante de Ingeniería Aeronáutica en la ESAVE y
#Tecnología en Análisis y Desarrollo de Software en el SENA y Backend Development en Alura & Oracle.
#Primer punto
numeroPistones=8
distanciaEjeCentral=4/100#pasamos de centimetros a metros
diametroCabeza=15/1000
anguloPlatoOscilante=math.radians(30)#pasamos de grados a radianes, debido a que python maneja las
#funciones trigonometricas en radianes. Ahora usamos la formula de desplazamiento volumetrico
Dv=(math.pi/2)*(math.pow(diametroCabeza,2)*numeroPistones*distanciaEjeCentral*math.tan(anguloPlatoOscilante))
print("El desplazamiento volumetrico es de ",Dv,"m^3.")
#Ahora buscamos el caudal de la bomba de pistón
velocidadAngular=300* 2 * 180/60
Q=Dv*velocidadAngular
print("El caudal de la bomba de pistón es de ",Q,"m^3/s")
#Ahora encontramos el caudal real, que es en relación a la eficiencia descrita
eficienciaPorcentual=92/100
caudalReal=eficienciaPorcentual*Q
print("El caudal real es de ",caudalReal,"m^3/s")
'''
2.	Determine el caudal instantáneo de una bomba de paletas, la cual gira a 270RPM
y tiene un diámetro de ejes cortos de 150mm y un diámetro, un diámetro de anillo de
leva de 200mm y un diámetro de rotor de 50mm. Considere un ancho de cara igual al
cuadrado de la quinta parte del diámetro de ejes cortos.
'''
#Segundo punto
diametroEjesCortos=150/1000#pasamos de mm a m
diametroAnilloLeva=200/1000#pasamos de mm a m
diametroRotor=50/1000#pasamos de mm a m
anchoCara=math.pow((diametroEjesCortos/5),2)
Dv2=(math.pi/2)*(diametroAnilloLeva*diametroEjesCortos-math.pow(diametroRotor,2))*anchoCara
print("El desplazamiento volumetrico es de ",Dv2,"m^3.")
#Ahora buscamos el caudal de la bomba de pistón
velocidadAngular2=270* 2 * 180/60
Q2=Dv2*velocidadAngular2
print("El caudal de la bomba de pistón es de ",Q2,"m^3/s")