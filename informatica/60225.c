/* calcolare il fattoriale di un numero*/

#include <stdio.h>

void fattoriale(int *_n,long *_fatt);

int main(){
    int n=0;
    long fatt;
    do{
        printf("Inserisci un valore: ");
        scanf("%d",&n);
    }while(n<0);
    fattoriale(&n,&fatt);
    printf("il fattoriale é %d é %ld", n, fatt)
}
void fattoriale(int *_n,long *_fatt){

for(int i=1; i<= *_n;i++){
        *_fatt*=i;
    }

}