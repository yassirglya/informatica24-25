/*Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per se stesso.*/

#include <stdio.h>

int main(){
    int num1;
    int num2;
    int i;
    int numprimo;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    for(i=num1; i<=num2; i++){
        numprimo=1;
        for(int y=2; y<=i/2; y++){
            if(i%y==0){
                numprimo=0;
            }
        }
        if(numprimo==1){
            printf("%d è un numero primo\n", i);
        }
    }

    
}