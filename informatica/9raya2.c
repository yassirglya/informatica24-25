/* Scrivi un programma in C che stampi il triangolo di Floyd. Il triangolo di Floyd è una sequenza di numeri disposti in un triangolo,
 dove la prima riga contiene un solo numero, 
 la seconda due numeri, 
 la terza tre numeri e così via.*/

#include <stdio.h>

int floyd(int _n);

int main()
{
    int n;
    printf("inserisci il numero di righe del triangolo di Floyd: ");
    scanf("%d", &n);
    floyd(n);
    return 0;
}

int floyd(int _n)
{
   int i, j, k=1;
   for(i=1; i<=_n; i++)
   {
       for(j=1; j<=i; j++)
       {
           printf("%d ", k);
           k++;
       }
       printf("\n");
   }
   return 0;
}