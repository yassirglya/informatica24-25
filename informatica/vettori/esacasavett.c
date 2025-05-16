#include <stdio.h>
#include <stdlib.h>

#define DIM 10

// Funzione per caricare un vettore di N elementi >= 0
void caricavettore(int v[], int dim){
    for(int i = 0; i < dim; i++){
        do {
            printf("Inserisci l'elemento in posizione %d: ", i);
            scanf("%d", &v[i]);
        } while(v[i] < 0);  // accetta solo numeri >= 0
    }
}

// Funzione per calcolare la somma fino al primo zero (incluso)
int somma_fino_a_zero(int v[], int dim){
    int somma = 0;
    int count = 0;

    for(int i = 0; i < dim; i++){
        somma += v[i];
        count++;
        if(v[i] == 0){
            break;
        }
    }

    printf("La somma è: %d\n", somma);
    printf("Numero di elementi considerati: %d\n", count);

    return somma;
}

int main(){
    int v[DIM];

    caricavettore(v, DIM);                // Prima carico il vettore
    somma_fino_a_zero(v, DIM);           // Poi faccio la somma fino al primo zero

    return 0;
}
