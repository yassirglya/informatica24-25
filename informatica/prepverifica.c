/*/*Scrivete una funzione avente due parametri interi
(passati per valore) b ed e che calcoli la potenza b^e con il metodo delle moltiplicazioni successive.
5*3= 5*5*5  */

int potenza(int _b , int _e);

int main(){
    int b, e;

    printf("inserisci i due numeri: ");
    scanf("%d %d" , &b ,&e);

    potenza(b ,e);
}

int potenza(int _b , int _e){
    int pot=_b;
    for(int i=1; i<=_e ; i++){
        pot*=_b;
    }

    printf("il risultato della potenza é: %d" pot);
}