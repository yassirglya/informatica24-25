/*Dato un array ordinato inserire un nuovo elemento all'interno dell'array.*/

#include <stdio.h>
#include <stdlib.h>

#define DIM 11 

void stampaArray(int vett[], int dim){
    for (int i = 0; i < dim; i++) {
        printf("%d ", vett[i]);
    }
    printf("\n");
}

    int inseriscinuovoelemento(int vett[], int dim, int nuovo){
        int pos=0;
        
        while (pos<dim && vett[pos]<nuovo) {
            pos++;
        }
    
        for (int i=dim; i>pos; i--) {
            vett[i]=vett[i - 1];
        }
    
        vett[pos]=nuovo;
    
        return dim + 1; 
    }
    


int main() {
    int v[DIM] = {2, 5, 9, 12, 18, 21, 30, 35, 40, 50};
    int n = 11; 
    int nuovo;

    stampaArray(v, n);

    printf("Inserisci un nuovo numero da ordinare: ");
    scanf("%d", &nuovo);

    inseriscinuovoelemento(v, n, nuovo);
    printf("Array dopo l'inserimento:\n");
    stampaArray(v, n);
}
