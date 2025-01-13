#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1;
    int n2;
    int div;
    int min;

    do{
        printf("Inserisci il primo numero (minore di 20): ");   //Inserimento del primo numero
        scanf("%d", &n1);
        fflush(stdin);

    }while(n1 < 0 || n1 > 20);  //Controllo che il numero sia compreso tra 0 e 20
