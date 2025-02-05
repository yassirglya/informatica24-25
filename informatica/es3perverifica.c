/*Scrivi un programma che effettua il calcolo 
della media dei voti della pagella, 
inserendoli uno alla volta e chiedendo
 a ogni inserimento di un numero se i voti 
 da inserire sono terminati 
accettando come risposta S oppure N*/

#include<stdio.h>
int main(){
    int voto;
    int somma=0;
    int contatore=0;
    char risposta;
    do{
        printf("Inserisci il voto: ");
        scanf("%d", &voto);
        somma=somma+voto;
        contatore++;
        printf("Vuoi inserire un altro voto? (S/N): ");
        scanf(" %c", &risposta);
    }while(risposta=='S');
    printf("La media dei voti e' %.2f\n", (float)somma/contatore);
    return 0;
    





        
        
           
        
        




        

    }

