/* Scrivi un programma che effettua il prodotto tra due numeri 
utilizzando il metodo delle somme successive dopo aver controllato 
l’input e accettato solo valori maggiori di 0.*/

#include <stdio.h>
int main()
{
    int num1=0;
    int num2=0;
    int risultato;
    int cnt;
   
    printf("Inserisci il primo numero (maggiore di 0): ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero (maggiore di 0): ");
    scanf("%d", &num2);

   
    if (num1 <= 0 || num2 <= 0) {
        printf("I numeri devono essere maggiori di 0.\n");
    } else {
        int risultato = (num1*num2);

        printf("Il prodotto tra %d e %d è: %d\n", num1, num2, risultato);
    }

    return 0;
}

