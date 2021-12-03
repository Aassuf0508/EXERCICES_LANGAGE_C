/*
    Exercice 5.3
    Ecrire un algorithme qui demande un nombre de départ, et qui ensuite affiche les dix nombres 
    suivants. Par exemple, si l'utilisateur entre le nombre 17, le programme affichera les nombres 
    de 18 à 27.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int nombre_de_l_utilisateur = 0;
    int compteur = 0;

    printf("Bienvenue dans ce programme!!!\nVous devez entrer un nombre et le programme se charge d'afficher les dix nombres qui suivent!!!\n\n");

    printf("Entrez le nombre : ");
    scanf("%d", &nombre_de_l_utilisateur);
    printf("Les dix nombres qui suivent %d sont : ", nombre_de_l_utilisateur);

    do
    {
        nombre_de_l_utilisateur++;
        printf("%d ", nombre_de_l_utilisateur);
        compteur++;

    } while (compteur != 10);

    printf("\n\n");
    
    return 0;
}