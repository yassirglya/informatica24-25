/*vreiamo un menu di richieste
1) caricare un array
2) stampare l'array
3) ordina l'array tramite bubble sort */



#include <stdio.h>
#include "libreria.c"

#define DIM 5

int main(){
    int vett[DIM];
    int scelta;
    do{
    printf("MENU\n");
    printf("\n1 Carica un array\n");
    printf("\n2 Stampa l'array\n");
    printf("\n3 Ordina l'array tramite bubble sort\n");
    printf("\n digitare 0 per terminare\n");
    scanf("%d", &scelta);
    switch (scelta){
        case 1:{
            riempiVettore(vett,DIM);
            break;
        }
        case 2:{
            stampaVettore(vett)
        }
        default:
        break;
    }

    }while(scelta!=0);

}