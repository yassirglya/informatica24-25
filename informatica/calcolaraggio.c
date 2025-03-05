/*Dato il raggio calcolare la circonferenza e l'area del cerchio
    Eseguire il passaggio dei parametri per indirizzo  
    c= 2*PI*raggio   PI=3.14     Ac=PI*raggio*raggio    */

#include <stdio.h>
const float PI = 3.14;

void circonfrnza(int *_c , int *_raggio);
void area(int *_a, int *_raggio);

int main(){
    int c, a;
    int raggio;

    printf("insrisci il raggio : ");
    scanf("%d", &raggio);

    circonfrnza(&c , &raggio);
    area(&a , &raggio);
}

void circonfrnza(int *_c, int *_raggio){
    *_c=2*PI**_raggio;
    printf("la circonfrnza é %d\t" , *_c);

}



void area(int *_a, int *_raggio){
    *_a=PI*(*_raggio**_raggio);
    printf("l'area del cerchio é %d" ,*_a);
}

