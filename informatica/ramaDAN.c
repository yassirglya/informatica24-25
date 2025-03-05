/*Scrivete una funzione avente due parametri interi
(passati per valore) b ed e che calcoli la potenza b^e con il metodo delle moltiplicazioni successive.
5*3= 5*5*5  */

#include <stdio.h>

int potenza(int _b , int _a);

int main(){
    int b, a;

    do{
        printf("inserisci i due valori: ");
        scanf("%d %d", &b , &a);
    }while(b<=0 || a<=0);

    potenza(b , a);


}

int potenza(int _b , int _a){
    int pot=_b;
    for(int i=1 ; i<_a; i++){
        pot*=_b;
       
        
        

    }
    

    printf("il risultato dlla potnza é : %d ", pot);
}

