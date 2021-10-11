#include <stdio.h>

int main(void)
{
    int y1, y2;
//On déclarre la viable echange
    int echange;
//Saisir l'entier
    printf("valeur du premier entier :");
    scanf("%d", &y1);
//Saisir l'entier
    printf("valeur du deuxième entier :");
    scanf("%d", &y2);
//On echange les entiers
    echange = y1;
    y1 = y2;
    y2 = echange;
//On imprime les entiers
    printf("Apres l'echange,le 1er entier = %d ,et le 2ème = %d ", y1, y2);
}