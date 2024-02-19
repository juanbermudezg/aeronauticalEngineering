import numpy as np
import matplotlib.pyplot as plt
import os
import easygui
import matplotlib.image as mpimg
from math import *
# Code created by @juanbermudezg, a student of Bachelor of Science in Aeronautical Engineering
# at Escuela de Aviación del Ejército.

def centralDiffApprox(f,x,h):
    return (f(x+h)-f(x-h))/(2*h)
def richardsonExtrapolation(f,x,h):
    d=(4/3)*centralDiffApprox(f,x,h/2)-(1/3)*centralDiffApprox(f,x,h)
    return d
def tangent_line(f, x, h):
    slope = richardsonExtrapolation(f, x, h)
    def tangent(x_):
        return slope * (x_ - x) + f(x)
    return tangent
def main():
    opt = 1
    while opt == 1:
        try:
            os.system('cls')
            print("Welcome to the application made by @juanbermudezg in order to know the derivative of a function in a certain value of x.")
            print("Here are some examples of functions to write:\n1- x+5\n2- x*cos(x-1)-sin(x)\n3- x**3+4*x**2-10")
            functionText = input('Type your function f(x): ')
            def f(x):
                return eval(functionText)
            step = float(input("Enter the step size (sampling step): "))
            x = float(input("Enter the value of x: "))
            x_min=x-step*100
            x_max=x+step*100
            x_values = np.arange(x_min, x_max, step)
            y_values = [f(x) for x in x_values]
            valueDerivative = richardsonExtrapolation(f,x,step)
            tangent = tangent_line(f, x, step)
            tangent_values = [tangent(x_) for x_ in x_values]
            print("The value of the derivative at ",x, " is ","{:.12f}".format(valueDerivative))
            img = mpimg.imread('logo.PNG')
            img = np.flipud(img)
            plt.plot(x_values, y_values, label="Function f(x)"+functionText)
            plt.imshow(img, extent=[x_min, x_max, y_values[-1], y_values[0]], aspect='auto', alpha=0.3)  
            plt.plot(x_values, tangent_values, label="Tangent line at x=" + str(x), linestyle='--', color='green')
            plt.title("Graph of the function and its derivative")
            plt.scatter(x, round(y_values[100]), color='red', label='Point (' + str(x) + ', ' + str(round(y_values[100])) + ')')
            plt.xlabel("x")
            plt.ylabel("f(x)")
            plt.legend()
            plt.gca().invert_yaxis()
            plt.grid(True)
            plt.show()
            opt=int(input('Would you like to continue?\nYes = 1\nNo = 0\n'))
        except:
            easygui.msgbox("Something went wrong, please try again!", title="Alert")
            opt = 1
    print("Thank you for using the app, see you the next time!")
if __name__ == "__main__":
    main()