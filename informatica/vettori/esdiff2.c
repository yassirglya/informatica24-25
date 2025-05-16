/*trovare il minimo e il massimo di ogni riga e di ogni colonna */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RIGHE 6
#define COLONNE 6
void caricaMatrice(int matrice[RIGHE][COLONNE]) {
    for (int i = 0; i < RIGHE; i++) {

            matrice[i]=rand()%10+1;
        for (int j = 0; j < COLONNE; j++) {
            
            matrice[j]=rand()%10+1;
            
        }
    }
}
void stampaMatrice(int matrice[RIGHE][COLONNE]) {
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

voidmin(int matrice[RIGHE][COLONNE],int valore){
    for (int i=0; i< RIGHE; i++) {
        int min=matrice[i];

        if(matrice[i]<min){
            min==matrice[i];
        }


    for (int j = 0; j < COLONNE; j++){
        int min=matrice[i];

        if(matrice[i]<min){
            min==matrice[i];
        }
    }

}