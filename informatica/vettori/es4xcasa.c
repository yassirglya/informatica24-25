/*DATO UN ARRAY SOSTITUIRE TUTTI GLI 0 CON IL VALORE MINIMO.*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void caricaVettore(int vettore[], int dim) {
    for (int i = 0; i < dim; i++){
                printf("Scrivi un numero per la cella %d : ", i);
                scanf("%d", &vettore[i]);
            
       
    }
}

void stampaVettore(int vettore[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%d ", vettore[i]);
    }
    printf("\n");
}

void trovamin(int vettore[], int dim) {
    int min =vettore[0];

    for (int i=1; i < dim; i++) {
        if (vettore[i]<min && vettore[i] != 0) {
            min = vettore[i];
        }
    }
    
    for (int i = 0; i < dim; i++) {
        if (vettore[i] == 0) {
            vettore[i] = min;
        }
    }
    
}

int main() {
    int vettore[DIM];

    caricaVettore(vettore, DIM);
    printf("Vettore prima della sostituzione:\n");
    stampaVettore(vettore, DIM);

    trovamin(vettore, DIM);

    printf("Vettore dopo la sostituzione:\n");
    stampaVettore(vettore, DIM);
}
