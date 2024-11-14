/* LEGGERE UNA SEQUENZA DI NUMERI ,
 VISUALIZZARLA E DETERMINATI QUANTI NUMERI SONO STATI
 INSERITI. SI TERMINA NON APPENA ARRIVA UNO 0 */

 #include<stdio.h>

 int main(){
    int numero;
    int cnt=1;

    printf("inserire un numero: ");
    scanf("%d", &numero);
    

    while( numero!=0){
        printf("Il valore inserito é : %d \n",numero);
        printf("inserire un numero: ");
        scanf("%d", &numero);
        cnt++;
    }
    printf("haio inserito %d valori" , cnt);

    

 }