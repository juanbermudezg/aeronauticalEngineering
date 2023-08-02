import numpy as np

# Definir los datos de ejemplo
x = np.array([1, 2, 3, 4, 5, 6, 7, 8])
y = np.array([2, 4, 3, 5, 1, 6, 2, 4])

# Calcular la integral definida
integral = np.trapz(y, x)

# Imprimir el valor de la integral definida
print(f"La integral definida de los datos es: {integral}")

# Puntualizar el valor de la integral definida en el punto medio del rango de datos
midpoint = (x.max() + x.min()) / 2
value_at_midpoint = np.interp(midpoint, x, y)
print(f"El valor de la integral definida en el punto medio es: {value_at_midpoint}")
