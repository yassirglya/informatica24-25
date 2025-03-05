/*Scrivete una funzione con prototipo void split_time ( long int tot_sec, int *h, int *m, int *s ) che,
dato un orario fornito in numero di secondi dalla mezzanotte, calcoli l’orario equivalente in ore, minuti, secondi, e lo
memorizzi nelle tre variabili puntate da (h), (m) e (s) rispettivamente. */

#include <stdio.h>

void split_time ( long int tot_sec, int *ore, int *min, int *sec );

int main() {
    long int tot_sec;
    int ore, min, sec;

    printf("Inserisci il numero di secondi dalla mezzanotte: ");
    scanf("%ld", &tot_sec);

    split_time(tot_sec, &ore, &min, &sec);

    printf("L'orario equivalente è: %d:%d:%d\n", ore, min, sec);

    return 0;
}

void split_time ( long int tot_sec, int *ore, int *min, int *sec ) {
    *ore = tot_sec/3600;
    *min = (tot_sec%3600) / 60;
    *sec = (tot_sec%3600) % 60;
}





