/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int n1=0;
    int n2=0;
    int k=0;
    int somma ,differenza;
    int scelta;


    printf("inserisci il primo numero");
    scanf("%d", &n1);
    printf("inserisci il secondo numero");
    scanf("%d", &n2);

    printf("---SCEGLI L'OPERAZIONE CHE VUOI ESEGUIRE---");
    printf("\n 1. LA SOMMA IN VALORE ASSOLUTO");
    printf("\n 2. LA DIFFERENZA TRA IL MAGGIORE E IL MINORE");
    printf("\n 3. GENERATO UN VALORE K DETERMINARE CHI DEI VALORI SI AVVICINA DI PIù");
    printf("\n 4. DETERMINARE SE UNO è MULTIPLO DELL'ALTRO ");
    scanf("%d , &scelta");

    num1=rand()30%+1;
    num2=rand()30%+1;
    printf("%.2d %.2d" num1, num2);

    switch (scelta){
        case 1:
            printf("\n la somma vale: %d" , num1+num2);
            break;
        case 2:
            printf("\n la differenza  vale: %d", num1-num2);
            break;
        case 3:
            printf("\n si avvicina di piu : %d " k-num1 || k-num2, );
            break;
        case 4:
            printf();
            break;
        default:
            printf();
            break;            
    }
}   
    


