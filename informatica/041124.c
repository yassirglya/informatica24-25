#include<stdio.h>

int main(){
    float sommadenaro=0; sommaconvertita=0;
    int scelta=0;
    const float tasso=1.23;

    printf("scegli l'operazione che vuoi fare: 1 per cambio dollaro/euro,");
    scanf("%d" &scelta);
    printf("inserisci il valore che vuoi convertire");
    scanf("%f" &sommadenaro);

    switch(scelta){
        case 1:
            sommaconvertita = sommadenaro/tasso;
            printf("&f € = %f $", sommadenaro,sommaconvertita)
            break;
        case 2:
             sommaconvertita = sommadenaro/tasso;
            printf("&f $ = %f €", sommadenaro,sommaconvertita)
            break;
            default:
                printf("hai scelto un'operazione non valida!");
                break;

    }

    if(scelta==1){

    } else if(scelta==2){

    } else{
        printf("hai scelto un opzione non valida!");

    }
    

}