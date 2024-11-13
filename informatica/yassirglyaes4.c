/*VERIFICARE SE UN NUMERO È POTENZA DEL 2 E SE LO È DETERMINARE
L’ESPONENTE.*/
#include<stdio.h>
int main(){



    int num=0;
    int esponente=0;


    printf("inserisci il numero : ");
    scanf("%d", &num);
    if(num%2==0){
        printf("IL NUMERO è UNA POTENZA DEL 2 ");
    }
    else{
        printf("IL NUMERO NON E UNA POTENZA DEL 2");

    }
    return 0;
}