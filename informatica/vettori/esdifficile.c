/*una matrice dove gli array nella diagonale si sommano */

#include <stdio.h>
#include <stdlib.h>

#define RIGHE 3
#define COLONNE 3

void caricaMatrice(int matrice[RIGHE][COLONNE]) {
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            printf("Inserisci il valore per la posizione [%d][%d]: ", i, j);
            scanf("%d", &matrice[i][j]);
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
void sommaDiagonale(int matrice[RIGHE][COLONNE]) {
    int somma = 0;
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            if(i == j) {
                somma += matrice[i][j];
            }
        }
    }
    printf("La somma degli elementi sulla diagonale principale è: %d\n", somma);
}
int main() {
    int matrice[RIGHE][COLONNE];
    
    caricaMatrice(matrice);
    stampaMatrice(matrice);
    sommaDiagonale(matrice);
    
    return 0;
}
   