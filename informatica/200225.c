/* dato un valore stampare i suoi fattori 
es : 28 = 2
14*2
7 */

#include<stdio.h>

int fattori(int _n);

int main(){
    int n;
    

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    fattori(n);

}

int fattori(int _n){
    int i=2;
    while(_n>1){
        if(_n%i==0){
            printf("%d ",i);
           _n=_n/i;
        }else{
            i++;
        }
}
}