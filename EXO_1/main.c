/*
    Exercice 5.1
    Ecrire un algorithme qui demande à l’utilisateur un nombre compris entre 1 et 3 jusqu’à ce 
    que la réponse convienne.
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int nombre_de_l_utilisateur = 0;

    printf("Bienvenue dans ce programme!!!\nVous devez entrer un nombre compris entre 1 et 3!!!\n\n");

    do
    {
        printf("Entrez un nombre compris entre 1 et 3 : ");
        scanf("%d", &nombre_de_l_utilisateur);

        if (nombre_de_l_utilisateur >= 1 && nombre_de_l_utilisateur <=3 )
            printf("Bravo !!! %d est bien compris entre 1 et 3\n\n", nombre_de_l_utilisateur);
        else
            printf("Non !!! %d n'est pas compris entre 1 et 3. Veuillez reessayer\n\n", nombre_de_l_utilisateur);

        
    } while (nombre_de_l_utilisateur < 1 || nombre_de_l_utilisateur>3);
    
    



    return 0;
}

