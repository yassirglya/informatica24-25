/* calcolare la somma dei primi N numeri
naturali

es: 5 = 1+2+3+4+5*/

#include <stdio.h>
int main(){

    int n=0;
    int somma=0;
     
    printf("inserisci un valore: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        somma += i;
    }

    printf("La somma dei primi %d numeri naturali è: %d\n", n, somma);


}