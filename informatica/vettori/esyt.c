/*Leggere e memorizzare in un array di 8 celle, 
8 numeri reali, dopo averli memorizzati calcolarne la somma e la media.*/

#include <stdio.h>



#define DIM 8


void caricaArray(int array[DIM]){
    for(int i=0; i<DIM; i++){
        printf("Inserisci il numero in posizione %d: ", i);
        scanf("%d", &array[i]);
    }
}
void stampaArray(int array[DIM]){
    for(int i=0; i<DIM; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int calcolaSomma(int array[DIM]){
    int somma = 0;
    for(int i=0; i<DIM; i++){
        somma += array[i];
    }
    return somma;
}

int calcolaMedia(int array[DIM]){
    int somma = calcolaSomma(array);
    return somma / DIM;
}

int main(){
    int array[DIM];
    caricaArray(array);
    printf("L'array inserito è:\n");
    stampaArray(array);
    
    int somma = calcolaSomma(array);
    printf("La somma dei numeri è: %d\n", somma);
    
    int media = calcolaMedia(array);
    printf("La media dei numeri è: %d\n", media);
    
    return 0;
}

