/*
    Exercice 5.7
    Ecrire un algorithme qui demande un nombre de départ, et qui calcule sa factorielle.
    NB : la factorielle de 8, notée 8 !, vaut 
    1 x 2 x 3 x 4 x 5 x 6 x 7 x 8
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int nombre_de_l_utilisateur = 0;
    int i = 0;

    printf("Bienvenue dans ce programme!!!\nVous devez entrer un nombre et le programme se charge de calculer et d'afficher la factorielle de ce dernier!!!\n\n");

    printf("Entrez le nombre : ");
    scanf("%d", &nombre_de_l_utilisateur);
    printf("La facctorielle de %d est : ", nombre_de_l_utilisateur);

    for ( i = nombre_de_l_utilisateur-1; i > 0; i--)
    {
        nombre_de_l_utilisateur *= i;
    }

    printf("%d\n\n", nombre_de_l_utilisateur);
    
    return 0;
}