#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    float num1;
    float num2;
    int scelta;

    int numero=0
    printf("-------scegli tra le seguenti operazioni----------")
    printf("0 TERMINA");
    printf("1. SOMMA");
    printf("2. DIFFERENZA"):
    printf("3. SOMMA");
    printf("4. DIVISIONE");

    printf("scegli l'operazione da compiere");
    scanf("%d" , &scelta);
    srand(time (NULL));
    num1=rand()%50+1;
    num2=rand()%50+1;

    switch (scelta){
        case 0:
            printf("\n il programma termina");
            break;
        case 1:
            printf("\n la somma vale", %.2f" ,num1+num2);
            break;
            case 2:
            printf("\n la differenza vale", %.2f" ,num1+num2);
            break;
            case 3:
            printf("\n la moltiplicazione vale", %.2f" ,num1+num2);
            break;
            case 4:
            printf("\n la divisione vale", %.2f" ,num1+num2);
            break;
        default:
            printf("\n hai inserito una scelta non valida");
            break;




    }
    return 0;

}