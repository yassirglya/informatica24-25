#include <stdio.h>
    int main (){
    int scelta=0, somma=0, costo=0, resto=0, a=0;
    
    printf("è un distributore di bevande automatico\n");
    printf("inserisci la tua scelta\n");
     printf("1: per un tè\n");
    printf("2: per un caffè macchiato\n");
     printf("3: per un capocino \n");
    printf("4: per un caffè espresso\n");
    printf("5: per l'acqua\n");
    scanf("%d", &scelta);
 
    switch (scelta)
 {
    case 1:
    printf("il tè costa 70 centesimi \n");
    costo=70;
    while (somma<costo)
 {
    printf("inserisci delle monete");
    scanf("%d", &a);
    somma+=a;
    printf("\n");
 }
    resto=somma-costo;
    printf("hai preso un tè e il tuo resto è %d", resto);
    break;
    case 2:
    printf("il caffè macchiato costa 50 centesimi \n");
    costo=50;
    while (somma<costo)
 {
    printf("inserisci delle monete");
    scanf("%d", &a);
    somma+=a;
    printf("\n");
 }
    resto=somma-costo;
    printf("hai preso un caffè macchiato e il tuo resto è%d", resto);
    break;
 
    case 3:
    printf("il capocino costa 80 centesimi \n");
    costo=80;
    while (somma<costo)
 {
    printf("inserisci delle monete");
    scanf("%d", &a);
    somma+=a;
    printf("\n");
 }
    resto=somma-costo;
    printf("hai preso un capocino e il tuo resto è %d",resto);
 break;
 
    case 4:
    printf("il caffè espresso costa 60 centesimi \n");
    costo=60;
    while (somma<costo)
 {
    printf("inserisci delle monete");
    scanf("%d", &a);
    somma+=a;
    printf("\n");
 }
    resto=somma-costo;
    printf("hai preso un caffè espresso e il tuo resto è
    %d", resto);
 break;
 
    case 5:
     printf("l'acqua costa 55 centesimi \n");
    costo=55;
    while (somma<costo)
 {
    printf("inserisci delle monete");
    scanf("%d", &a);
    somma+=a;
    printf("\n");
 }
    resto=somma-costo;
    printf("hai preso dell'acqua e il tuo resto è %d",resto);
    break;

 default:
    printf("la tua scelta non valida %d", scelta);
    break;
 }
}