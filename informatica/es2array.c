/* CARICATO UN VETTORE CON VALORI RANDOM
CALCOLARE LA MEDIA DEI VALORI */

#include <stdio.h>
#include "libreria.c"

#define DIM 4

int main(){
    int vett[DIM]={0};
    float media;
    
    richiedivalori(vett, DIM);
    stampavett(vett, DIM, '-');
    calcolamedia(vett, DIM);
}