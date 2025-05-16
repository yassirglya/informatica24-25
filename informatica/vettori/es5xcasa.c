/*Inversione dell'ordine degli elementi di un array*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

void caricaarray(int vettore[], int dim){
    for(int i=0; i<dim ; i++){
        vettore[i]=rand()%10;
    }
}

void stampaaarray(int vettore[], int dim){
    for(int i=0; i<dim ; i++){
        printf(" %d ", vettore[i]);
    }
printf("\n");
}

void invertiarray(int vettore[], int dim){
    int temp;
    for (int i=0; i<dim/2 ; i++){
        temp=vettore[i];
        vettore[i]=vettore[dim-1-i];
        vettore[dim-1-i]=temp;
    }
    for (int i = 0; i < dim; i++) {
        printf("%d ", vettore[i]);
}
}

int main(){
    int vett[DIM];
    

    printf("array prima di essere invertito : \n");
    caricaarray(vett, DIM);
    stampaaarray(vett, DIM);
    printf("array dopo essere stato invertito : \n");
    invertiarray(vett, DIM);
    

}

