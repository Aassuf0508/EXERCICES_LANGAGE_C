/*
    Ecrire un algorithme qui demande un nombre de départ, et qui ensuite affiche les dix nombres 
    suivants. Par exemple, si l'utilisateur entre le nombre 17, le programme affichera les nombres 
    de 18 à 27.
    Exercice 5.4
    Réécrire l'algorithme précédent, en utilisant cette fois l'instruction Pour
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int nombre_de_l_utilisateur = 0;
    int i = 0;

    printf("Bienvenue dans ce programme!!!\nVous devez entrer un nombre et le programme se charge d'afficher les dix nombres qui suivent!!!\n\n");

    printf("Entrez le nombre : ");
    scanf("%d", &nombre_de_l_utilisateur);
    printf("Les dix nombres qui suivent %d sont : ", nombre_de_l_utilisateur);

    for ( i = 0; i < 10; i++)
    {
        nombre_de_l_utilisateur++;
        printf("%d ", nombre_de_l_utilisateur);
    }

    printf("\n\n");
    
    return 0;
}