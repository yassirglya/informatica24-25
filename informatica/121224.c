/*dati N numeri in input con N chiesto all utente strettamente maggiori di 5
calcolare e mostrare la somma dei numeri negativi e dei numeri positivi*/

#include <stdio.h>
int main(){
    
    int num=0;
    int somma=0;
    int val=0;


    do{
    printf("inserisci un numero : ");
    scanf("%d", &num);

    }while(num>5);

    for(int i=0; i<num; i++ )
    {
        printf("inserisci un numero : ");
        scanf("%d", &val);
        if(val>=0)
    }

    printf("il risultato é %d")

}