# Gauss-Seidel method, with a view of each of the iterations, modified by
# Juan A. Bermudez, student of the bachelor of science
#in aeronautical engineering at ESAVE
import numpy as np
A = np.array([[4,-1,0,0,0],
              [-1,4,-1,0,0],[0,-1,4,-1,0],[0,0,-1,4,-1],[0,0,0,-1,4]])
B = np.array([1,1,1,1,-1])
X0  = np.array([0.,0.,0.,0.,0.])
tolera = 0.00001
iteramax = 10
tamano = np.shape(A)
n = tamano[0]
m = tamano[1]
X = np.copy(X0)
diferencia = np.ones(n, dtype=float)
errado = 2*tolera
itera = 0
while not(errado<=tolera or itera>iteramax):
    print("Iteración #",itera+1)
    for i in range(0,n,1):
        suma = 0 
        for j in range(0,m,1):
            if (i!=j): 
                suma = suma-A[i,j]*X[j]
        nuevo = (B[i]+suma)/A[i,i]
        diferencia[i] = np.abs(nuevo-X[i])
        X[i] = nuevo
        print("\tx",i+1,".", X[i])
    errado = np.max(diferencia)
    itera = itera + 1
X = np.transpose([X])
if (itera>iteramax):# revisa si NO converge
    X=0
verifica = np.dot(A,X)# revisa respuesta
print('X: ')
print(X)
print('A.X=B: ')
print(verifica)