/*scrivi un programma che visualizzi la somma dei quadrati naturali successivi a n*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    int somma = 0;
    int inizio = 0;
    int quantita;
    int i;

    printf("Inserisci un numero: "); //si richiede il numero da dove partire
    scanf("%d", &num); //num 3

    do{
        printf("Inserisci la quantita di numeri da sommare: "); //si richiede la quantita di numeri da sommare
        scanf("%d", &quantita);
    }while(quantita<=0);
inizio=num; //metto la variabile num in inizio per non alterare il valore di num

    for(int i = 1; i<=quantita; i++){
    somma=somma+(inizio*inizio); 
    inizio++;
    }

    printf("la somma dei %d valori da %d vale %d", quantita , num, somma);
}