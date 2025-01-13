/*Scrivi un programma che visualizzi la somma dei quadrati
 dei primi 12 numeri naturali successivi a 8
*/

#include <stdio.h>
int main(){

    int inizio;
    int quantità;
    int sum=0;

    printf("inserisci il valore iniziale: ");
    scanf("%d",&inizio);
    do{
    printf("inserisci quanti valori da considerare: ");
    scanf("%d",&quantità);
    }while(quantità<=0)
    for(int i=inizio+1; i<=inizio+quantità; i++){
        somma+=i*i;

    }

    printf("la somma dei %d valori da %d vale %d", quantita , inizio , somma);
    

}