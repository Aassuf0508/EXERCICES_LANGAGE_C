/*
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

    Exercice 5.9
    Réécrire l’algorithme précédent, mais cette fois-ci on ne connaît pas d’avance combien 
    l’utilisateur souhaite saisir de nombres. La saisie des nombres s’arrête lorsque l’utilisateur 
    entre un zéro.

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int plus_grand_nombre = 0, plus_petit_nombre = 1, i=0, entree_de_l_utilisateur, position_grand;

    printf("Bienvenue dans ce programme!!!\nVous devez entrer une serie de nombres tant que le nombre n'est pas 0 et le programme se charge de vous afficher le plus grand element de la liste ainsi que sa position!!!\n\n");

    do
    {
        printf("Entrez le nombre numero %d : ", i+1);
        scanf("%d", &entree_de_l_utilisateur);
        i++;

        if (entree_de_l_utilisateur > plus_grand_nombre)
        {
            plus_grand_nombre = entree_de_l_utilisateur;
            position_grand = i;
        }
        
    } while (entree_de_l_utilisateur != 0);
    

    
    
    printf("\nLe plus grand nombre de la liste est  %d et est entre a la position numero %d.\n\n", plus_grand_nombre, position_grand);
    
    

     
    return 0;
}