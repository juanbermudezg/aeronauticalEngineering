'''Script made by Juan A. Bermudez, student of the bachelor of science
in aeronautical engineering at ESAVE'''
import numpy as np
A=np.array([[-8,11,5],[2,-2,1],[4,-13,3]],dtype=float)#this is the original matrix
np.set_printoptions(precision=5)
row=len(A)
#now we should make two matrix with zeros, L and U
L=np.zeros((row,row+1))
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
            L[i][j]=    operator
'''z=U[2][3]/U[2][2]
y=(U[1][3]+(U[1][2]*(-1)*z))/U[1][1]
x=(U[0][3]+(U[0][2]*(-1)*z)+(U[0][1]*(-1)*y))/U[0][0]
print("x=",x,"\ny=",y,"\nz=",z)
y=U[1][2]/U[1][1]
x=(U[0][2]+(U[0][1]*(-1)*y))/U[0][0]
print("x=",x,"\ny=",y)
print("Matriz final=",U)'''
print("A:\n",A)
print("L:\n",L)
print("U:\n",U)