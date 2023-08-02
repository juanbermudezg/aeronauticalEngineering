import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Crear un DataFrame con datos ficticios
productos = ['Producto A', 'Producto B', 'Producto C', 'Producto D', 'Producto E']
ventas = np.random.randint(100, 1000, size=len(productos))
margen_ganancia = np.random.uniform(0.05, 0.25, size=len(productos))
df = pd.DataFrame({'Producto': productos, 'Ventas': ventas, 'Margen de ganancia': margen_ganancia})

# Definir la función personalizada para asignar los colores
def color_barra(valor):
    if valor >= 0 and valor <= 500:
        return 'green'
    elif valor > 500 and valor <= 750:
        return 'yellow'
    elif valor > 750 and valor <= 1000:
        return 'red'

# Crear el gráfico de barras con los colores asignados
plt.bar(df['Producto'], df['Ventas'], color=[color_barra(venta) for venta in df['Ventas']])

# Mostrar el gráfico
plt.show()
