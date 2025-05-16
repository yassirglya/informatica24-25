/*DATO UN ARRAY ESEGUIRE LA MEDIA DEI SUOI VALORI*/


#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void caricaVettore(int vettore[], int dim) {
    for (int i = 0; i < dim; i++) {
        vettore[i] = rand() % 100; 
    }
}
void stampaVettore(int vettore[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");
}

void caricamedia(int vettore[],int dim){
    int media=0;
    int somma=0;

    for (int i = 0; i < dim; i++) {
        somma+=vettore[i];
    }
    media=somma/dim;

    printf("la media é %d", media);

}

   


int main(){

    int vett[DIM];

    caricaVettore(vett, DIM);
    stampaVettore(vett, DIM);
    caricamedia(vett, DIM);
    

}