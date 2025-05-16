/*Memorizzare una matrice di dimensioni 6x6 e verificare se è "somma-palindroma-per-riga"
 ovvero se la somma degli elementi nella prima riga
  è uguale alla somma degli elementi nell'ultima,
 se la somma degli elementi della seconda è uguale a quella degli elementi della penultima.*/

 #include <stdio.h>
 #include <stdlib.h>
 
#define colonne 6
#define righe 6

void caricaMatrice(int matrice[righe][colonne]){
    for(int i=0; i<righe; i++){
        for(int j=0; j<colonne; j++){
            printf("Inserisci il valore per la cella [%d][%d]: ", i, j);
            scanf("%d", &matrice[i][j]);
        }
    }
}

void stampaMatrice(int matrice[righe][colonne]){
    for(int i=0; i<righe; i++){
        for(int j=0; j<colonne; j++){
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}


int sommaRiga(int matrice[righe][colonne]){
    int somma[righe];
    for(int i=0; i<righe; i++){
        somma[i] = 0;
        for(int j=0; j<colonne; j++){
            somma[i] += matrice[i][j];
        }
    }
    return somma;
}

int verificaSommaPalindroma(int matrice[righe][colonne]){
    int somma[righe];
    sommaRiga(matrice);
    for(int i=0; i<righe/2; i++){
        if(somma[i] != somma[righe-1-i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int matrice[righe][colonne];
    caricaMatrice(matrice);
    printf("La matrice inserita è:\n");
    stampaMatrice(matrice);
    
    if(verificaSommaPalindroma(matrice)){
        printf("La matrice è somma-palindroma-per-riga.\n");
    } else {
        printf("La matrice non è somma-palindroma-per-riga.\n");
    }
    
    return 0;
}
    
    

