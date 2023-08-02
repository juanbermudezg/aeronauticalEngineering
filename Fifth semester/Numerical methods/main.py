'''Script made by Juan A. Bermudez, student of the bachelor of science
in aeronautical engineering at ESAVE'''
import numpy as np
A=np.array([[2,-3,5],[6,-1,3],[-4,1,-2]],dtype=float)#this is the original matrix
np.set_printoptions(precision=4)
row=len(A)
for i in range(row):
    columnTemp=len(A[i])
    if columnTemp!=row:
        print("The matrix is not a square")
        break
#now we should make two matrix with zeros, L and U
L=np.zeros((row,row))
U=A.copy()
for k in range (row):
    for m in range(row):
        if k==m:
            L[k][m]=1
for i in range(row): #filas
    for j in range(row): #columnas
        count1=0
        if j<i:
            operator=U[i][j]/U[j][j]
            for k in U[i]:
                k=k-(operator)*U[j][count1]
                U[i][count1]=k
                count1=count1+1
            L[i][j]=operator
print(A)
print(L)
print(U)