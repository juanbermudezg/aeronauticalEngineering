import matplotlib.pyplot as plt
from matplotlib_venn import venn2, venn2_circles

# Definición de conjuntos
A = set(['a', 'e', 'i', 'o', 'u'])
B = {'a', 'b', 'c', 'd', 'e', 'f', 'g', '1', '4'}
U = {2}

# Calcular los conjuntos requeridos
A_union_B = A.union(B)
A_intersect_B = A.intersection(B)
A_complement = U.difference(A)
B_complement = U.difference(B)
A_union_B_complement = U.difference(A_union_B)
A_complement_intersect_B_complement = A_complement.intersection(B_complement)

# Crear el diagrama de Venn
venn = venn2(subsets=(len(A), len(B), len(A_intersect_B)),
             set_labels=('A', 'B'))

# Agregar etiquetas a los conjuntos
venn.get_label_by_id('10').set_text('\n'.join(A))
venn.get_label_by_id('01').set_text('\n'.join(B))

# Agregar títulos
venn.get_label_by_id('A').set_text('A')
venn.get_label_by_id('B').set_text('B')

# Agregar círculos
venn_circles = venn2_circles(subsets=(len(A), len(B), len(A_intersect_B)))
venn_circles[0].set_lw(1.0)
venn_circles[1].set_lw(1.0)

# Mostrar el diagrama
plt.title('Diagrama de Venn')
plt.show()