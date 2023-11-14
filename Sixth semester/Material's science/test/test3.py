import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from scipy.optimize import minimize


df = pd.read_excel('data2.xlsx')
x=df['Esfuerzo']
y=df['Tension']

grado_polinomio = 75  # Puedes ajustar esto según el grado del polinomio deseado

# Realizar el ajuste polinómico
coefficients = np.polyfit(x, y, grado_polinomio)

# Imprimir los coeficientes del polinomio
ecuacion_polinomio = np.poly1d(coefficients)

ecuacion_str = 'Ecuación polinómica: '
for i, coef in enumerate(reversed(coefficients)):
    if i == 0:
        ecuacion_str += f'{coef:.2f}'
    else:
        ecuacion_str += f' + {coef:.2f}x^{i}'

print(ecuacion_str)
# Encontrar el punto máximo dentro del rango de datos
resultado_optimizacion = minimize(lambda x: -ecuacion_polinomio(x), x[0], bounds=[(min(x), max(x))])
x_punto_maximo = resultado_optimizacion.x[0]
y_punto_maximo = ecuacion_polinomio(x_punto_maximo)

# Graficar los datos y la curva de regresión polinómica
x_fit = np.linspace(min(x), max(x), 100)
y_fit = ecuacion_polinomio(x_fit)

plt.scatter(x, y, label='Datos')
plt.plot(x_fit, y_fit, label=f'Regresión polinómica (grado {grado_polinomio})', color='red')
plt.scatter(x_punto_maximo, y_punto_maximo, color='green', label=f'Punto máximo en y')
plt.xlabel('ε (mm/mm)')
plt.ylabel('σ (N/m^2)')
plt.title('Gráfico de esfuerzo vs. deformación | Zona plástica')
plt.legend()
plt.show()

# Imprimir el punto máximo
print(f'Punto máximo en y: ({x_punto_maximo:.2f}, {y_punto_maximo:.2f})')