/*Scrivete una funzione con parametro un intero n(passato per valore) 
che stabilisca se n è un numero primo. La funzione dovrà far rturn 1 se il numero è primo altrimenti 0.  
*/

#include<stdio.h>

int numprimo(int _n);

int main(){
    int n;

    printf("insrisci un numro: ");
    scanf("%d" ,&n);

    printf("%d", numprimo(n));
}

int numprimo(int _n){
 
    if(_n%1==0 && _n%_n==0 && _n%2!=0 && _n%3!=0 && _n%5!=0){
        return 1;
    }else 
        return 0;
}

