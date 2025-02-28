/*data una sequena di numeri verificare se i numeri presi a coppie risultano essere amicali
termina quando uno dei numeri é 0 , UTILIARE LE FUNXIONI*/

#include <stdio.h>
#include <stdlib.h>

void amicali(int _n1, int _n2);
int sommaDivisori(int _ndiv);

int main(){

    int n1, n2;
    int n1div, n2div;

    do{
        printf("Inserisci il primo numero: ");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &n2);

        amicali(n1, n2);

    }while(n1!=0 && n2!=0);

    return 0;
}



