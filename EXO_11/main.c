/*
    Exercice 5.11
    Écrire un algorithme qui permette de connaître ses chances de gagner au tiercé, quarté, quinté 
    et autres impôts volontaires.
    On demande à l’utilisateur le nombre de chevaux partants, et le nombre de chevaux joués. Les 
    deux messages affichés devront être :
    Dans l’ordre : une chance sur X de gagner
    Dans le désordre : une chance sur Y de gagner
    X et Y nous sont donnés par la formule suivante, si n est le nombre de chevaux partants et p le 
    nombre de chevaux joués (on rappelle que le signe ! signifie "factorielle", comme dans 
    l'exercice 5.6 ci-dessus) :
    X = n ! / (n - p) !
    Y = n ! / (p ! * (n – p) !)
    NB : cet algorithme peut être écrit d’une manière simple, mais relativement peu performante. 
    Ses performances peuvent être singulièrement augmentées par une petite astuce. Vous 
    commencerez par écrire la manière la plus simple, puis vous identifierez le problème, et 
    écrirez une deuxième version permettant de le résoudre.

*/

#include <stdlib.h>
#include <stdio.h>

int facto(int nombre);
void affecter_valeur(int *X, int *Y, int partant, int jouer);

int main(void)
{
    int nombre_partant=0 , nombre_jouer=0, X=0, Y=0;

    printf("Bienvenue dans ce programme!!!\nVous devez entrer le nombre de chevaux partant ainsi que le nombre de chevaux jouer afin de connaitre vos chance de gagner au tierce!!!\n\n");
    
    printf("Entrez le nombre de chevaux partants : ");
    scanf("%d", &nombre_partant);

    printf("Entrez le nombre de chevaux joues : ");
    scanf("%d", &nombre_jouer);

    affecter_valeur(&X, &Y, nombre_partant, nombre_jouer);

    printf("\nVos chances de gagner sont : \n\n");
    printf("Dans l'ordre : une chance sur %d de gagner\n", X);
    printf("Dans le desordre : une chance sur %d de gagner\n", Y);

    return 0;
}

int facto(int nombre)
{
    if(nombre == 0)
    {
        return 1;
    }
    else
    {
        return nombre * facto(nombre-1);
    }
}

void affecter_valeur(int *X, int *Y, int partant, int jouer)
{
    *X = facto(partant)/ facto(partant - jouer);
    *Y = facto(partant)/ (facto(jouer)*facto(partant-jouer));
}