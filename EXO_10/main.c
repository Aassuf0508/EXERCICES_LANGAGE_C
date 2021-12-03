/*
    Exercice 5.10
    Lire la suite des prix (en euros entiers et terminée par zéro) des achats d’un client. Calculer la 
    somme qu’il doit, lire la somme qu’il paye, et simuler la remise de la monnaie en affichant les 
    textes "10 Euros", "5 Euros" et "1 Euro" autant de fois qu’il y a de coupures de chaque sorte à 
    rendre.

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int prix_article = 0,somme_article = 0, montant_remis_par_le_client = 0, montant_remise;
    int nombre_billet_10_E = 0, nombre_billet_5E = 0, total_remise;
    int i = 0;

    printf("Bienvenue dans ce programme!!!\nVous devez entrer une serie de prix des achats d'un client et le programme se charge de calculer et d'afficher la somme des achats ainsi que la remise du client!!!\n\n");
    printf("Entrez les prix des achats du client:\n");

    do
    {
        printf("Prix article %d : ", i+1);
        scanf("%d", &prix_article);
        somme_article += prix_article;
        i++;
       
    } while (prix_article != 0);

    printf("Montant du : %d euros", somme_article);

    printf("\nMontant depose par le client : ");
    scanf("%d", &montant_remis_par_le_client);

    montant_remise = montant_remis_par_le_client - somme_article ;
    total_remise = montant_remise;


    while (montant_remise >= 10)
    {
       montant_remise -= 10;
       nombre_billet_10_E++;
    }
    
    if (montant_remise >= 5 )
    {
        montant_remise -= 5;
        nombre_billet_5E++;

    }

    printf("Remise :\nBillets de 10 Euros : %d\nBillets de 5 Euros : %d\nPieces de 1Euro : %d\n\nTotal remise : %d\n\n", nombre_billet_10_E, nombre_billet_5E, montant_remise, total_remise);
    
    

    
    
    return 0;
}