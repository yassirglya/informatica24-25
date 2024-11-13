/*INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI.*/

#include<stdio.h>
#include<time.h>
int main(){


    srand(time(NULL))
    int n1=0;
    int n2=0;
    int n3=0;
    int n4=0;


    printf("inserisci il primo numero : ");
    scanf("%d", &n1);
    printf("inserisci il secondo numero : ");
    scanf("%d", &n2);
    printf("inserisci il terzo numero : ");
    scanf("%d", &n3);
    printf("inserisci il quarto numero : ");
    scanf("%d", &n4);

    rand()%100+1

    if(n1+n2+n3+n4=>200){
        printf("sei arrivato/superato a 200!!")

    }
    else{
         printf("non hai raggiunto 200 riprova un altra volta!!")
    }
       


}