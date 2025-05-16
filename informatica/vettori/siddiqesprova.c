/*Dato un array ordinato inserire un nuovo elemento all'interno dell'array.*/
#include <stdio.h>

#define max 11
void stampaArray(int vett[], int dim){
    int i=0;
	for( i=0 ; i <dim ; i++){
        printf("V[%d]= %d \n", i , vett[i]);
    }
}
int main(){
    int V[20]={0,2,5,6,8,9,10,13,15,16}, n=0 , cnt=0;
	int i=0;
    printf("inserisci un valore\n");
    scanf("%d", &n);
    for ( i = 0; i < max; i++)
    {
        if (V[i]<n)
            cnt++;
    }
    printf("________________\n");
    for ( i = max; i >= cnt; i--)
    {
        V[i]=V[i-1];
    }
    V[cnt-1]=n;
    stampaArray(V,11);

}