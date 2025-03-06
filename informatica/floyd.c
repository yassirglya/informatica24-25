/* SVILUPPARE UN PROGRAMMA IN c CHE SVILUPPI 
IL TRIANGOLO DI FLOYD
N=5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/
#include<stdio.h>

void floyd (int _righe ,int _colonna,int _n){

    int cnt=1;
    for(int i=1; i<=_n; i++){
        
        for(int j=1 ; j<=i ; j++){
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");

    }
    
}
int main(){
    int righe,colonna,n;

    printf("inserisci il numero: ");
    scanf("%d", &n);

    floyd(righe,colonna,n);


}