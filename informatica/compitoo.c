/*Realizza un programma C che richiede in input due valori N un valore positivo 
maggiore di 50; D un valore positivo minore di 10.
Visualizzare a video tutti i valori da 1 a N che siano multipli di D.*/

#include <stdio.h>

int main(){

    int n;
    int d;
    int i;

    do{
        printf("Inserisci un valore positivo maggiore di 50: "); //chiedo all'utente di inserire un valore positivo maggiore di 50
        scanf("%d", &n);
        fflush(stdin); 
    }while(n<=50);  //il ciclo si ripete finchè l'utente non inserisce un valore positivo maggiore di 50
    do{
        printf("Inserisci un valore positivo minore di 10: "); //chiedo all'utente di inserire un valore positivo minore di 10
        scanf("%d", &d);
        fflush(stdin);
    }while(d>=10); //il ciclo si ripete finchè l'utente non inserisce un valore positivo minore di 10

    i=1; //inizializzo i a 1
while(i<=n){  //ciclo while che si ripete finchè i è minore o uguale a n
        if(i%d==0){ //se il resto della divisione tra i e d è uguale a 0
            printf("%d - ", i); //stampo i
        }
        i++; //incremento i

    }

    return(0);

}