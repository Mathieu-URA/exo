#include <stdio.h>

int main(void)
{
// on declare 2 entier
    int x1, x2;
//saisir la valeur de l'entier 1
    printf("valeur de l'entier :");
    scanf("%d", &x1);
//siasir la valeur de l'entier 2
    printf("valeur de l'entier :");
    scanf("%d", &x2);
//on imprime le produit de x1 et x2 
    printf("Produit de %d et %d = %d ", x1, x2, x1 * x2);
    return 0;
}