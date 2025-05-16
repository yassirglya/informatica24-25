/*Dato
un vettore numerico di N posizioni al primo elemento dispari stampare
quanti valori diversi da zero si sono incontrati, il numero dispari
incontrato e la sua posizione nel vettore;*/

#include <stdio.h>
#include <stdlib.h>
#define dim 10

void caricavettore(int vettore[], int DIM){
    for(int i=0; i<DIM; i++){
        printf("Inserisci il valore %d: ", i);
        scanf("%d", &vettore[i]);
    }
}

void stampavettore(int vettore[], int DIM){
    for(int i=0; i<DIM; i++){
        printf("%d ", vettore[i]);
    }
    printf("\n");
}




void dispari(int vettore[] ,int DIM){
    int cnt=0;
    for(int i=0; i<DIM; i++){
        if (vettore[i] %2 != 0 ){
            printf("Il primo numero dispari è %d e si trova in posizione %d\n", vettore[i], i);
            break;
        }
        if(vettore[i]!=0){
            cnt++;
        }
        printf("si sono incontrati %d valori diversi da 0 " ,cnt);
        
       
    }
}

int main(){
    int vettore[dim];


    caricavettore(vettore, dim);
    stampavettore(vettore, dim);
    dispari(vettore, dim);
    return 0;
}