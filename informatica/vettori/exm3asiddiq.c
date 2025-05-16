/*trovare il valore massimo in un array*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RIGHE 5
#define COLONNE 5

void caricamatrice(int v[][COLONNE], int righe ){
    for(int i=0; i<righe; i++){

         v[i]=rand()%10+1;
    }
    
    for(int j=0; j<righe; j++){

        v[j]=rand()%10+1;
   }

    

    
}

void stampamatrice(int v[][COLONNE], int righe){
    for(int i=0; i<righe; i++){
    for(int j=0; j<righe; j++){
        printf("%d ", v[i][j]);
    }
}
}

int maxvett(int v[][COLONNE], int righe ){
    int max=v[0][0];
    for(int i=1; i<righe ; i++){
        for(int j=1; j<righe ; j++){
            if(v[i][j]>max){
                v[i][j]=max;
            }

        }
    }
    return max;
}

int main(){

    int vettore[COLONNE][RIGHE];
    int MAX=0;

    caricamatrice(vettore , RIGHE); 
    stampamatrice(vettore , RIGHE);
    MAX=maxvett(vettore , RIGHE);

    printf(" il massimo é %d " , MAX);

}


