/* DATO UN ARRAY CALCOLARE LA SOMMA DI TUTTI I VALORI POSITIVI E DI TUTTI I VALORI NEGATIVI;*/


#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void caricaVettore(int vettore[], int dim) {
    for (int i = 0; i < dim; i++) {
        vettore[i] = rand() % 100 - 50; // Genera numeri casuali tra -50 e 49
    }
}

void stampaVettore(int vettore[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");
}

void calcolaposneg(int vettore[], int dim){

    int calcpos=0;
    int calcneg=0;

    for(int i=0; i < dim; i++) {
        if(vettore[i]>0){
            calcpos+=vettore[i];
        }else {
            calcneg+=vettore[i];
        }
    }

    printf("la somma dei positivi é: %d  e invece quella dei negativi é: %d ", calcpos , calcneg);
}
        

int main(){

    int vett[DIM];

    caricaVettore(vett, DIM);
    stampaVettore(vett, DIM);
    calcolaposneg(vett, DIM);
}