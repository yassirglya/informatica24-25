/* Date N coppie di numeri (con N generato casualmente 
con valori compresi tra 2 e 7) contare e stampare quelle che hanno i valori 
l'uno l'opposto dell'altro. (ad esempio 3 e -3 oppure -7 e 7)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    int n1,n2;
    int cnt=0;
    
    srand(time(NULL));
    N=rand()%6+2;

    printf("Numero di coppie: %dn\n", N);

    
    for (int i=0; i<N; i++) {
        
        n1=rand()%20-10;  
        n2=rand()%20-10; 
        printf("Coppia %d: (%d, %d)\n",i+1,a,b);
        if(n1==-n2) {
            cnt++;
        }
    } 
    printf("Numero di coppie con valori opposti: %d\n",cnt);
}
