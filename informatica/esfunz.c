/* ricerc i primi tre numeri perfetti 
def numero perfetto:
se la somma dei suoi divisori é uguale al numero stesso
es:6 é perfetto perche 1+2+3=6
tre numeri perfetti sono 6 28 496 

crea una funzione che restituisca la somma dei divisori di un numero*/

#include<stdio.h>
#include<stdlib.h>

int somma_divisori(int n){
    int somma=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            somma+=i;
        }
    }
    return somma;
}

int main(){
    int n=1;
    int cnt=0;
    while(cont<3){
        if(somma_divisori(n)==n){
            printf("%d\n",n);
            cnt++;
        }
        n++;
    }
    return 0;
}

