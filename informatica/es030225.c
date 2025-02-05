/*DATO UN VALORE ESEGUIRE LA CONVERSIONE DA DECIMALE A BINARIO*/

#include <stdio.h>
#include <math.h>

long converti(int _n);
int main(){
    int n=0;
    long conv=0;
    do{
        printf("Inserisci un valore: ");
        scanf("%d",&n);
    }while(n<0);
    conv=converti(n);
    printf("%ld\n" ,conv);

    long converti(int_n){
        int quox=_n,
        int resto=0;
        int cont=0;
        int _conv=0;

        while(quox!=0){
            resto=quox%2;
            quox=quox/2;
            _conv=pow(10,cont);
            cont++;
        }
        return _conv;
    }

}

