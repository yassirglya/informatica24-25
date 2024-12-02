#include <stdio.h>
int main()
{
    int num1=0;
    int num2=0;
    int num3=0;
    int risultato;
    int cnt;
   
    printf("Inserisci il primo numero (maggiore di 0): ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero (maggiore di 0): ");
    scanf("%d", &num2);

   
    if (num1 <= 0 || num2 <= 0) {
        printf("I numeri devono essere maggiori di 0.\n");
    } else {
        int risultato = (numero1*numero2);

        printf("Il prodotto tra %d e %d è: %d\n", numero1, numero2, risultato);
    }

    return 0;
}

