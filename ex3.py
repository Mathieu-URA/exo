from cs50 import get_string
from cs50 import get_int


# Déclaration de trois entiers
x1 = 0
x2 = 0
x3 = 0
# Déclaration d'un entier,le max des trois
max = 0
# Saisie des trois entiers x1,x2,x3
x1 = get_int("valeur de x1 : \n")
x2 = get_int("valeur de x2 : \n")
x3 = get_int("valeur de x3 : \n")
# Si x1 est plus grand que x2
if x1 >= x2:
    # alors le max est x1
    max = x1
# si x1 est plus petit que x2
else:
    # Alors le max est x2
    max = x2
# si x3 est plus grand que le max
if x3 >= max:
    max = x3
# Affichage du maximum
print(f"le maximum de {x1},{x2} et {x3} est : {max}  ")
