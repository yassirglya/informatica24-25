/* Scrivi un programma che esegue il calcolo del fattoriale di un numero num inserito.*/

#include <stdio.h>
int main(){
    int num;
    int fattoriale=1;
    printf("inserisci un numero:");
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        fattoriale*=i;
    }
    printf("Il fattoriale di %d è %d\n",num,fattoriale);

}