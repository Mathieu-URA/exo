#include <stdio.h>

int main(void)
{


//Déclaration de trois entiers
    int x1, x2, x3;
//Déclaration d'un entier,le max des trois
    int max;
//Saisie des trois entiers x1,x2,x3
    printf("valeur de x1 : "); 
    scanf("%d", &x1);
    printf("valeur de x2 : "); 
    scanf("%d", &x2);
    printf("valeur de x3 : "); 
    scanf("%d", &x3);
//Si x1 est plus grand que x2
    if (x1 >= x2)
//alors le max est x1
    {
        max = x1;
    }
//si x1 est plus petit que x2
    else
//Alors le max est x2
    {
        max = x2;
    }
//si x3 est plus grand que le max
    if (x3 >= max)
    {
        max = x3;
    }
//Affichage du maximum
    printf("le maximum de %d,%d et %d est : %d  ", x1, x2, x3, max);
}