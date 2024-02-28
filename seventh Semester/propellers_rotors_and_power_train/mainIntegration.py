import numpy as np
import matplotlib.pyplot as plt
import os
import easygui
import matplotlib.image as mpimg
from math import *
import re

# Code created by @juanbermudezg, a student of Bachelor of Science in Aeronautical Engineering
# at Escuela de Aviación del Ejército.
class customError(Exception):
    def __init__(self, mensaje):
        self.mensaje = mensaje

    def __str__(self):
        return self.mensaje
def convert_to_radians(angle_in_degrees):
    return radians(angle_in_degrees)

def prepare_expression(expression):
    trig_functions = ['sin', 'cos', 'tan', 'asin', 'acos', 'atan']
    for func_name in trig_functions:
        pattern = rf"\b{func_name}\(([^)]+)\)"
        expression = re.sub(pattern, rf"{func_name}(convert_to_radians(\1))", expression)
    return expression
def simpson(f,a,b,n:int):
    h = (b-a)/n
    oddsum = 0
    evensum = 0
    for j in range(1, n):
        
        x=a+h*j
        if j % 2 == 0:
            evensum+=2*f(x)
        else:
            oddsum+=4*f(x)
    
    abc = (h/3)*(f(a)+evensum+oddsum+f(b))
    return abc
def main():
    opt = 1
    while opt == 1:
        try:
            os.system('cls')
            print("Welcome to the application made by @juanbermudezg in order to know the integration of a function in a certain value of x.")
            print("Here are some examples of functions to write:\n1- x+5\n2- x*cos(x-1)-sin(x)\n3- x**3+4*x**2-10")
            functionText = input('Type your function f(x): ')
            preparedTextFunction = prepare_expression(functionText)
            def f(x):
                return eval(preparedTextFunction)
            step = int(input("Enter the step size (even number please): "))
            x_min=float(input("Enter the minimum value of x: "))
            x_max=float(input("Enter the maximum value of x: "))
            if x_max<x_min or step%2 !=0:
                raise customError("The step must be an even number\nOr the minimum value must be less than the maximum!")
            x_values = np.linspace((x_min-abs(x_min*1.5)), x_max*1.5, 1000)    
            y_values = [f(x) for x in x_values]        
            valueIntegration = simpson(f,x_min, x_max,step)
            print("The value of the integration between ",x_min, " and ", x_max, " is ","{:.12f}".format(valueIntegration))
            img = mpimg.imread('src/logo.PNG')
            plt.plot(x_values, y_values, label="Function f(x)"+functionText)
            plt.imshow(img, extent=[x_values[0], x_values[-1], y_values[0], y_values[-1]], aspect='auto', alpha=0.3) 
            plt.fill_between(x_values, y_values, where=[(x_values>=x_min) and (x_values<=x_max) for x_values in x_values], color='lightgray', alpha=0.75)
            plt.title("Graph of the function and its integration\nby @juanbermudezg")
            plt.xlabel("x")
            plt.ylabel("f(x)")
            plt.legend()
            plt.grid(True)         
            plt.show()
            opt=int(input('Would you like to continue?\nYes = 1\nNo = 0\n'))
        except Exception as e:
            print("Error:", e)
            text = "Something went wrong, please try again!\nError: {}".format(e)
            print("The value of 'text' variable:", text)
            easygui.msgbox(text, title="Alert")
            opt = 1
    print("Thank you for using the app, see you the next time!")
if __name__ == "__main__":
    main()