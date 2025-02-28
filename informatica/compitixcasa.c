/*Scrivete una funzione avente due parametri interi(passati per valore) b ed e che 
calcoli
 la potenza b^e con il metodo delle moltiplicazioni successive.*/

#include <stdio.h>

int potenza(int _b, int _e);

int main(){

    int b, e;
    int pot;

    printf("Inserisci la base: ");
    scanf("%d", &b);
    printf("Inserisci l'esponente: ");
    scanf("%d", &e);

    pot=potenza(b, e);

    printf("Il risultato è: %d\n", pot);
}

int potenza(int _b, int _e){

    int i;
    int pot=1;

    for(i=0; i<_e; i++){
        pot=pot*_b;
}

    return pot;
}