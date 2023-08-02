import matplotlib.pyplot as plt

# Datos de frecuencia
intervalos = ['0-9', '10-19', '20-29', '30-39', '40-49', '50-59', '60-69', '70-79', '80-89', '90-100']
frecuencia = [2, 1, 0, 3, 5, 6, 5, 6, 2, 0]

# Configuración del gráfico
plt.bar(intervalos, frecuencia, color='blue')
plt.title('Resultados de la prueba de historia')
plt.xlabel('Intervalos')
plt.ylabel('Frecuencia')

# Mostrar gráfico
plt.show()
