/*
    Exercice 5.6
    Ecrire un algorithme qui demande un nombre de départ, et qui calcule la somme des entiers 
    jusqu’à ce nombre. Par exemple, si l’on entre 5, le programme doit calculer :
    1 + 2 + 3 + 4 + 5 = 15
    NB : on souhaite afficher uniquement le résultat, pas la décomposition du calcul.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int nombre_de_l_utilisateur = 0;
    int i = 0;

    printf("Bienvenue dans ce programme!!!\nVous devez entrer un nombre et le programme se charge d'afficher la somme des entiers de 1 a ce nombre!!!\n\n");

    printf("Entrez le nombre : ");
    scanf("%d", &nombre_de_l_utilisateur);
    printf("La somme des entiers de 1 a %d est : ", nombre_de_l_utilisateur);

    for ( i = nombre_de_l_utilisateur-1; i > 0; i--)
    {
        nombre_de_l_utilisateur += i;
    }

    printf("%d\n\n", nombre_de_l_utilisateur);
    
    return 0;
}