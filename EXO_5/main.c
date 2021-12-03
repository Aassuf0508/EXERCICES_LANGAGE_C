/*
    Exercice 5.5
    Ecrire un algorithme qui demande un nombre de départ, et qui ensuite écrit la table de 
    multiplication de ce nombre, présentée comme suit (cas où l'utilisateur entre le nombre 7) :
    Table de 7 :
    7 x 1 = 7
    7 x 2 = 14
    7 x 3 = 21
    …
    7 x 10 = 70
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int nombre_de_l_utilisateur = 0;
    int i = 0;

    printf("Bienvenue dans ce programme!!!\nVous devez entrer un nombre et le programme se charge d'afficher la table de multiplication de ce nombre!!!\n\n");

    printf("Entrez le nombre : ");
    scanf("%d", &nombre_de_l_utilisateur);
    printf("\nTable de %d :\n\n", nombre_de_l_utilisateur);

    for ( i = 0; i < 10; i++)
    {
        printf(" %d * %d = %d\n", nombre_de_l_utilisateur, i+1, nombre_de_l_utilisateur*(i+1));
    }

    printf("\n");
    
    return 0;
}