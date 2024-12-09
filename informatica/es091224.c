/*PROGETTARE UN ALGORITMO CHE LEGGA UN NUMERO b<a 
E SCRIVA QUANTE VOLTE a é DIVISIBILE PER b
ES: a=162 e b=3 a é DIVISIBILE 4 VOLTE PER b*/
#include <stdio.h>
int main()
{
    int a=0;
    int b=0;
    int div=0;
    int cnt=0;
    int val=0;
    
    printf("inserisci il primo numero=");
    scanf("%d", &a);
    printf("inserisci il secondo numero = ");
    scanf("%d", &b);

    if (a<b){
        val=a;
        a=b;
        b=val;
    }
    div=a;
    if(a%b==0){
        do{
            div=div/b;  
            cnt++;

        }while(div%b==0);

        printf("il numero %d é divisibile per %d per %d volte ",a,b,cnt);

        
        
    }
}