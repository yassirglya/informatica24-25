/*DATO UN ARRAY CALCOLARE QUANTI VALORI PARI E QUANTI VALORI DISPARI;*/


#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void caricavettore(int vett[], int dim){
    for (int i=0; i<dim ; i++){
        vett[i]=rand()%10;
    }
}

void stampavettore(int vett[],int dim){
    for (int i=0; i<dim ; i++){
        printf("%d ", vett[i]);
    }
printf("\n");
}

void calcparidispari(int vett[], int dim){
    int cntpari=0;
    int cntdispari=0;
    for (int i=0; i<dim ; i++){
        if(vett[i]%2==0){
            cntpari++;
        }else{
            cntdispari++;
        }
    }
    printf("i valori pari in questo vettore sono %d e invece quelli dispari sono %d ", cntpari,cntdispari);
}

int main(){
    int v[DIM];

    caricavettore(v,DIM);
    stampavettore(v,DIM);
    calcparidispari(v,DIM);
}
