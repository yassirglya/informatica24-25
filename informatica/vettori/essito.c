/*Leggere un array di interi di 10 posizioni e dire se in tutte le posizioni pari dell’array 
è memorizzato un numero pari.*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void caricaVettore(int vettore[], int dim) {
    for (int i = 0; i < dim; i++) {
        do {
            printf("Scrivi un numero positivo per la cella %d : ", i);
            scanf("%d", &vettore[i]);
        } while (vettore[i] < 0); 
    }
}
void stampaVettore(int vettore[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");
}

void numpari(int vettore[], int dim){
    for (int i = 0; i < dim; i+=2){
        if(vettore[i]%2==0){
            printf("il numero in posizione %d é pari \n ", i);
        }else{
            printf("il numero in posizione %d non é pari \n ",i);
        }
        
    }
}

int main(){
    int vett[DIM];

    caricaVettore(vett,DIM);
    stampaVettore(vett,DIM);
    numpari(vett,DIM);
}