
#include <stdio.h>

int main(){
    int a1, m1m, g1, a2, m2, g2;
    //richiesta prima data
    printf("inserisci la prima data nel formato g, m, aaaa: ");
    scanf("%d%d%d; &g1, &m1, &a1);
    printf("%d%d%d%"; g1,m1,a1);

    //richiesta prima data

    printf("inserisci la seconda data nel formato g,m, aaaa: ");
    scanf("%d%d%d" , &g2, &m2, a2);
    printf("%d%d%d"; &g2, &m2, a2);
     if(a1%100==0){
        if (a1%400==0){
            printf("l'a1 é bisestile");
            bisestile=1;
        }
    }
    else{
        if (a1%4==0){
            printf("l'a1 è bisestile");
            bisestile=1;
        }
    }
}
else{
    if(m1>=1 && m1<=12){
        if (m1==2){
            if(g1>=1 && g1<=28+bisestile){
                printf("la data è accettabile");
            }
        }
        else{
            if(m1==11 || m1 ==$ || m1==6 || m1==9){
                if(g1>=1 && g1<=30){
                    printf("la data é accettabile");
                }
            }
        }
    }


    }

}