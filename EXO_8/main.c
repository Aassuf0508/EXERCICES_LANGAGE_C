/*
    Exercice 5.8
    Ecrire un algorithme qui demande successivement 20 nombres à l’utilisateur, et qui lui dise 
    ensuite quel était le plus grand parmi ces 20 nombres :
    Entrez le nombre numéro 1 : 12
    Entrez le nombre numéro 2 : 14
    etc.
    Entrez le nombre numéro 20 : 6
    Le plus grand de ces nombres est : 14
    Modifiez ensuite l’algorithme pour que le programme affiche de surcroît en quelle position 
    avait été saisie ce nombre :
    C’était le nombre numéro 2
    Il affiche également le plus petit nombre de la liste et sa position
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int plus_grand_nombre = 0, plus_petit_nombre = 1, i, entree_de_l_utilisateur[5], position_petit, position_grand;

    printf("Bienvenue dans ce programme!!!\nVous devez entrer une serie de 20 nombres et le programme se charge de vous afficher le plus grand et le plus petit element de la liste ainsi que leurs position!!!\n\n");

    for ( i = 0; i < 5; i++)
    {
        printf("Entrez le nombre numero %d : ", i+1);
        scanf("%d", &entree_de_l_utilisateur[i]);
    }
    printf("\n");
    
    plus_petit_nombre = entree_de_l_utilisateur[0];
    for ( i = 0; i < 5; i++)
    {
        if (entree_de_l_utilisateur[i] <= plus_petit_nombre)
        {
            plus_petit_nombre = entree_de_l_utilisateur[i];
            position_petit = i;
        }
        
        if (entree_de_l_utilisateur[i] > plus_grand_nombre)
        {
            plus_grand_nombre = entree_de_l_utilisateur[i];
            position_grand = i;
        }
        
    }


    printf("Le plus grand nombre de la liste est  %d et est entre a la position numero %d.\n", plus_grand_nombre, position_grand+1);
    printf("Le plus petit nombre de la liste est  %d et est entre a la position numero %d.\n\n", plus_petit_nombre, position_petit+1);
    

     
    return 0;
}