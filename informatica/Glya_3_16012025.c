/*Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 8 35 3 8 46 - numeri inseriti: 5.*/

#include<stdio.h>
int main(){

    int scelta=0;
    int num1=0;
    int num2=0;


    do
    {
        printf("Inserisci 0 per stampare i valori in senso crescente o 1 per stampare i valori in senso decrescente: ");
        scanf("%d", &scelta);
    }while(scelta<0 || scelta>1);

   

    do
    {
        
        printf("Inserisci un numero: ");
        scanf("%d", &num1);
        printf("Inserisci un numero: ");
        scanf("%d", &num2);
        if(scelta==0)
        {
            if(num2>num1)
            {
                printf("%d",num2);
                num1=num2;
            }
        }
        else if(scelta==1)
        {
            if(num2<num1)
            {
                printf("%d", num2);
            }
               
        }
    } while (num2!=0);
    
    
}
 


    