/*
    Exercice 5.2
    Ecrire un algorithme qui demande un nombre compris entre 10 et 20, jusqu’à ce que la 
    réponse convienne. En cas de réponse supérieure à 20, on fera apparaître un message : « Plus 
    petit ! », et inversement, « Plus grand ! » si le nombre est inférieur à 10
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int nombre_de_l_utilisateur = 0;

    printf("Bienvenue dans ce programme!!!\nVous devez entrer un nombre compris entre 10 et 20!!!\n\n");

    do
    {
        printf("Entrez un nombre compris entre 10 et 20 : ");
        scanf("%d", &nombre_de_l_utilisateur);

        if (nombre_de_l_utilisateur >20 )
            printf("Le nombre doit etre plus petit que %d \n\n", nombre_de_l_utilisateur);
        else if (nombre_de_l_utilisateur < 10 )
            printf("Le nombre doit etre plus grand que %d \n\n", nombre_de_l_utilisateur);
        else
            printf("Bravo !!! %d est bien compris entre 10 et 20\n\n", nombre_de_l_utilisateur);
        
    } while (nombre_de_l_utilisateur < 10 || nombre_de_l_utilisateur > 20);
    

    return 0;
}