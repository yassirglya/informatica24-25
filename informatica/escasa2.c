/*Scrivi un programma in C che calcoli la sequenza di Fibonacci fino al termine n-esimo, dove n è un numero intero positivo inserito dall'utente. 
Il programma dovrà utilizzare cicli e funzioni.*/

#include<stdio.h>

int fibonacci(int _n){
    int fib,a=1,b=1;
    if(_n>=1){
        printf("%d  ", a);
    }
    if(_n>=2){
        printf("%d  ", b);
    }
    for(int i=3 ; i<=_n ; i++){
        fib=a+b;
        printf("%d  ",fib);
        a=b;
        b=fib;
      
    }
    
}

int main(){
    int n;

    do{
        printf("inserisci un numero : ");
        scanf("%d", &n);
    }while(n<=0);

    fibonacci(n);
}
