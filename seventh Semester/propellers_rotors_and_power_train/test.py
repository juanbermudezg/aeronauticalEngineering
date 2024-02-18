import numpy as np
import matplotlib.pyplot as plt

def aproxCentrada(f, x, h):
    return (f(x + h) - f(x - h)) / (2 * h)

def extrapolacionRichardson(f, x, h):
    d = (4 / 3) * aproxCentrada(f, x, h / 2) - (1 / 3) * aproxCentrada(f, x, h)
    return d

def main():
    # Solicitar al usuario que ingrese la función como una expresión de Python
    funcion = input("Ingrese la función f(x): ")
    
    # Convertir la entrada del usuario en una función de Python utilizando eval
    def f(x):
        return eval(funcion)
    
    # Solicitar al usuario el rango de valores de x para graficar
    x_min = float(input("Ingrese el valor mínimo de x: "))
    x_max = float(input("Ingrese el valor máximo de x: "))
    
    # Solicitar al usuario el tamaño del paso (resolución del gráfico)
    paso = float(input("Ingrese el tamaño del paso (paso de muestreo): "))
    
    # Crear un arreglo de valores de x en el rango especificado
    x_values = np.arange(x_min, x_max, paso)
    
    # Calcular los valores de la función correspondientes a los valores de x
    y_values = [f(x) for x in x_values]
    
    # Calcular los valores de la derivada de la función correspondientes a los valores de x
    derivada_values = [extrapolacionRichardson(f, x, paso) for x in x_values]
    
    # Crear el gráfico
    plt.plot(x_values, y_values, label="Función f(x)")
    plt.plot(x_values, derivada_values, label="Derivada de f(x)")
    plt.title("Gráfico de la función y su derivada")
    plt.xlabel("x")
    plt.ylabel("y")
    plt.legend()
    plt.grid(True)
    plt.show()

if __name__ == "__main__":
    main()
