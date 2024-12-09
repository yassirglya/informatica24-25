/*DATI N NUMERI , SOMMARLI 4 A 4
TERMINA NON APPENA SI INTRODUCE UNO 0
ES: -29,5,-3,26 SOMMA==1
    124,-2,16 SOMMA==141*/

#include<stdio.h>
int main(){
    int n;
    int somma;
    int cnt=0;

    do{
        printf(" inserisci un numero : ");
        scanf("%d",&n);
        cnt++;
        somma=somma+n;
        printf("il risultato é %d", somma);
        }
      while (n==0);
        printf("hai inserito uno 0 terminare il programma");
}