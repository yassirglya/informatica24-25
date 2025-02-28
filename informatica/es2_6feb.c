/*dato il raggio calcolare la circonferena 
e l'area del cerchio*/

#include <stdio.h>
#include <stdlib.h>

const float PI = 3.14;

void circonferenza(int _r); 
void area(int _r); 
int main(){

    int r;

    printf("Inserisci il raggio: ");
    scanf("%d", &r);

    circonferenza(r);

    area(r);
}
void circonferenza(int _r){
    
    float c;
    
    c = 2 * PI * _r; 

    printf("La circonferenza di raggio %d è: %.2f\n", _r, c);
}
void area(int _r){

    float a; 

    a = PI * (_r * _r); 

    printf("L'area di raggio %d è: %.2f\n", _r, a);
}