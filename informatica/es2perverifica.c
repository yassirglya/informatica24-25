/*Data una serie di N numeri
 (con N scelto dall'utente maggiore
  di 3) 
determinare il valore più grande
 e quello immediatamente inferiore 
 (il secondo).
*/

#include<stdio.h>
int main(){
    int N;
    int num;
    int max;
    int max2;
    int i;

    do{
        printf("Inserisci il numero di elementi: ");
        scanf("%d", &N);}
    while(N<=3);

    for(i=0; i<N; i++){
        printf("Inserisci il numero: ");
        scanf("%d", &num);
        if(i==0){
            max=num;
            max2=num;
        }
        else{
            if(num>max){
                max2=max;
                max=num;
            }
            else if(num>max2){
                max2=num;
            }
        }


    }
    printf("Il numero più grande è: %d e il secondo più grande é %d", max,max2);
}
   