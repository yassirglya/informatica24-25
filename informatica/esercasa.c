/*Scrivi un programma in C che calcoli la somma e il prodotto dei numeri da 1 a N (dove 
N è un numero intero positivo inserito dall'utente) usando solo cicli e funzioni.*/

#include <stdio.h>

void somma (int _n);
void prodotto(int _n);

int main(){
    int n;

    do{
        printf(" inserire un numero : ");
        scanf("%d", &n);
    }while (n<=1);
    
    somma(n);
    prodotto(n);

}

void somma (int _n){
    int cnt=0;
    for(int i=1 ; i<=_n ; i++){
        cnt+=i;
    }
    printf("%d ",cnt);
}

void prodotto (int _n){
    int cnt=1;
    for(int i=1 ; i<=_n ; i++){
        cnt*=i;
        
    }
    printf("%d ",cnt);
}

