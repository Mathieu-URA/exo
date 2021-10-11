from cs50 import get_string
from cs50 import get_int


y1 = 0
y2 = 0
# On déclarre la viable echange
echange = 0
# Saisir l'entier
y1 = get_int("quel est la valeur de y1 ?\n")
# Saisir l'entier
y2 = get_int("quel est la valeur de y2 ?\n")
# On echange les entiers
echange = y1
y1 = y2
y2 = echange
# On imprime les entiers
print(f"Apres l'echange,le 1er entier = {y1} ,et le 2ème = {y2} ")
