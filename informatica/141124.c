/*dati 10 valori 
stamparli */

#include <stdio.h>

int main(){
    int num;
    int cnt=0;
    while(cnt<5){
    printf("\n inserire un numero: ")
    scanf("%d", &num);
    cnt++; //cnt=cnt+1
    printf("il valore inserito é : %d\n", num);
    }
}