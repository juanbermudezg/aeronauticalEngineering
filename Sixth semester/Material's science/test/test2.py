import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

df = pd.read_excel('data3.xlsx')
x=df['Esfuerzo']
y=df['Tension']
coefficients = np.polyfit(x, y, 1)

# Obtener la pendiente y la intersección y
pendiente = coefficients[0]
interseccion_y = coefficients[1]

# Imprimir la pendiente y la intersección y
print(f'Pendiente: {pendiente:.2f}')
print(f'Intersección y: {interseccion_y:.2f}')

# Crear la ecuación de la línea
ecuacion = f'Ecuación: y = {pendiente:.2f}x + {interseccion_y:.2f}'
print(ecuacion)

# Graficar los datos y la línea de regresión
plt.scatter(x, y, label='Datos')
plt.plot(x, np.polyval(coefficients, x), label='Línea de regresión', color='red')
plt.xlabel('ε (mm/mm)')
plt.ylabel('σ (N/m^2)')
plt.title('Gráfico de esfuerzo vs. deformación | Zona elástica')
plt.legend()
plt.show()