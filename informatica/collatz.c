/*Considerate la seguente regola: dato un numero intero positivo n, se n è pari lo si divide per 2, se è dispari lo si
moltiplica per 3 e si aggiunge 1 al risultato. Quando n è 1 ci si ferma. 
Questa semplice regola permette di costruire delle sequenze: la sequenza che si costruisce a partire dal numero
n è detta sequenza di Collatz di n. 
Ad esempio, la sequenza di Collatz di  7  è:  7   22   11   34   17   52   26   13   40   20   10   5   16   8  4  2  1 
Lunghezza=17

E’ un noto problema aperto stabilire se ogni sequenza di Collatz termina 
(cioè, se arriva a 1).  
Scrivere una funzione che, dato un numero, (passando il numero per indirizzo) 
calcoli ogni volta il nuovo valore di n, determinando così la sequenza di Collatz del numero n e la sua lunghezza.
N.B.: nel testare il programma inserite ad esempio una volta n=7 e poi n=9*/

#include <stdio.h>

void collatz(int *_n, int *_lunghezza);
int main(){

    int n;
    int lunghezza=0;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    collatz(&n, &lunghezza);

    printf("Lunghezza: %d\n", lunghezza);
}

void collatz(int *_n, int *_lunghezza){



    while(*_n!=1){
        if(*_n%2==0){
            *_n=*_n/2;
            printf("%d ", *_n);
            *_lunghezza++;
        }else{
            *_n=(*_n*3)+1;
            printf("%d ", *_n);
            *_lunghezza++;
        }
    }
}

