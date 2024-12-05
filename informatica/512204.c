/* CALCOLO IL QUOZIENTE FRA DUE NUMERI
APPLICANDO IL METODO DELLE SOTTRAZIONI SUCCESSIVE
*/

#include<stdio.h>
int main()
{
    int n1;
    int n2;
    int quoz;
    int resto;

    do
    {
        
    
    
    printf("inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("inserisci il secondo numero: ");
    scanf("%d", &n2);

   
    } while (n1>0 && n2>0);
    resto=n1;
    while(resto>=n2){
        
        resto=resto-n2;
        quoz++;
    }
    printf("il quoziente dei due numeri è %d con resto &d:", quoz, resto)




    
    
}