/* Inizializzazione Riempimento con valori pari Stampa
 Creazione di una Libreria personale
 */
#include <stdio.h>
#include "libreria.c" 
#define DIM 10


int main(){
    int vett[DIM]={0};
    richiedivalori(vett, DIM);
    stampavettint(vett, DIM, '-');
    
}   
