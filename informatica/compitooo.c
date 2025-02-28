/*Scrivete una funzione con parametro un intero n(passato per valore) che stabilisca se 
n è un numero primo. 
La funzione restituirà 1 se il numero è primo altrimenti 0.  */

#include <stdio.h>

int numeroprimo(int _n);

int main(){

    int n;
    int nprimo=0;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    primo=numeroprimo(n);
  
}

int numeroprimo(int _n){

    int i;

    for(i=2; i<_n; i++){
        if(_n%i==0){
            nprimo=0;
            printf("Il numero %d è primo\n", nprimo);
        }else{
            printf("Il numero %d non è primo\n", nprimo);
        }
    }

    return primo;
}   

