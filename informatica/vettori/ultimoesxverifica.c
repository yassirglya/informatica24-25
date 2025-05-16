/*Ricerca del secondo valore più piccolo in un array*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

void caricavett(int vett[], int dim){
    for(int i=0; i< dim; i++){
        vett[i]=rand() % 11;
    }
}

void stampavett(int vett[], int dim){
    for (int i=0; i< dim; i++){
        printf(" %d " ,vett[i]);
    }
printf("\n");
}

void cercasecondomin(int vett[], int dim){
    int min=vett[0];
    int secondomin=vett[0];
    for(int i=1; i< dim; i++){
        if(vett[i]<min){
            min=vett[i];
        }
 }
    for(int i=1; i< dim; i++){
        if(vett[i] != min && vett[i]< secondomin){
            secondomin=vett[i];
    }
}
printf("il secondo minimo é %d ",secondomin);
}


int main(){
    int v[DIM];

    caricavett(v , DIM);
    stampavett(v , DIM);
    cercasecondomin(v , DIM);
}