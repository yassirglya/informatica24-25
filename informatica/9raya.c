/*Scrivi un programma che calcoli
 la moltiplicazione e la divisione di due numeri interi. 
 Ogni operazione deve essere eseguita tramite una funzione separata.*/

#include <stdio.h>

int moltiplicazione(int n1, int n2);
int divisione(int n1, int n2);

int main()
{
    int n1, n2, scelta=0;
    printf("inserisci due numeri : ");
    scanf("%d %d", &n1, &n2);

    printf("scegli l'operazione da eseguire:\n 1. per moltiplicazione\n 2. per divisione\n digita qua la tua scelta:" );
    scanf("%d", &scelta);

    if(scelta == 1)
    {
        printf("il risultato della moltiplicazione è: %d", moltiplicazione(n1, n2));
    }
    else if(scelta == 2)
    {
        printf("il risultato della divisione è: %d", divisione(n1, n2));
    }
    else
    {
        printf("scelta non valida");
    }
    return 0;

}

int moltiplicazione(int n1, int n2)
{
    return n1 * n2;
}

int divisione(int n1, int n2)
{
    return n1 / n2;
}