/*dati in input 10 numeri interi determinare il valore maggiore
 e quanto volte compare*/

 #include <stdio.h>

int main() {
    int num=0;
    int max=0;
    int cnt=0;

    printf("Inserisci 10 numeri interi:\n");
    for (int i=0; i<10; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &num);
         if (num>max) {
            max=num;
            cnt=1;
        } else if (num==max) {
            cnt++;
        }
    }

    printf("Il valore maggiore è %d e appare %d volte.\n", max, cnt);

}
