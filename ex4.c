#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(void)
{  
    //on déclare nos variables avec un tableau
    char modele[30];
    char plaque[50];
    //open CSV file
    FILE *file = fopen("ex4.csv", "a");
    //premier argument est le nom du fichier
    //deuxieme argument est soit r, soit w, soit a,...
    if (!file)
    {
        return 1;
    }
    //obtenir les modeles et plaques des vehicules

    printf("Modele de la voiture :");
    scanf("%s", modele);
    printf("Plaque d'imatriculation :");
    scanf("%s", plaque);

    //imprimer (ecrire) dans le fichier csv
    fprintf(file, "%s, %s\n", modele, plaque);

    //fermer le ficher csv
    fclose(file);
}