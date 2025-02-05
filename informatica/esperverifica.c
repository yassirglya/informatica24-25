/*Scrivi un programma che effettua il calcolo della 
media dei voti della pagella, inserendoli uno alla volta e chiedendo a ogni 
inserimento di un numero se i voti da inserire 
sono terminati accettando come risposta S oppure N*/

#include<stdio.h>
int main(){
    int N;
    int S;
    int voto;
    int sum=0;
    int cnt=0;
    float media;
    do{
        printf("Inserisci il voto: ");
        scanf("%d", &voto);
        sum=sum+voto;
        cnt++;
        printf("Hai finito di inserire i voti?: ");
        scanf("%d", &S, &N);
    }while(S==0);
    media=sum/cnt;
    printf("La media dei voti è: %f\n", media);
    return 0;

}