    #include <stdio.h>
    #include <time.h>
    int main (){
    int scelta=0, pc , cntp=0, cntu;
        
        srand(time(NULL));
    printf("è un gioco \n");
    printf("inserisci la tua scelta\n");
    printf("1: a\n");
    printf("2: b\n");
    printf("3: c\n");
    printf("4: d\n");
    printf("5: e\n");
 
        for (int i = 0; i < 5; i++){
        scanf("%d", &scelta);
        pc=rand()%5 + 1;
        switch (scelta)
 {
 
        case 1:
        if (scelta==pc)
 {
        printf("sei ugguali con il pc \n");
        cntp++;
        cntu++;
 }
    else
 {
    printf("hai vinto \n");
    cntu++;
 }

 break;



        case 2:
        if (scelta==pc)
 {
        printf("sei ugguali con il pc \n");
        cntp++;
        cntu++;
 }
    else if (scelta>pc)
 {
        printf("hai perso\n");
        cntp++;
 }
    else
 {
        printf("hai vinto \n");
        cntu++;
 }
        break;
        case 3:
        if (scelta==pc)
 {
        printf("sei ugguali con il pc \n");
        cntp++;
        cntu++;
 }
        else if (scelta>pc)
 {
        printf("hai perso\n");
        cntp++;
 }
        else
 {
        printf("hai vinto \n");
        cntu++;
 }
        break;
    case 4:
    if (scelta==pc)
 {
    printf("sei ugguali con il pc \n");
    cntp++;
    cntu++;
    }
    else if (scelta>pc)
 {


    printf("hai perso\n");
    cntp++;
 }
else
 {
     printf("hai vinto \n");
    cntu++;
 }
    break;
    case 5:
    if (scelta==pc)
 {
     printf("sei ugguali con il pc \n");
    cntp++;
     cntu++;
 }
    else
 {
        printf("hai preso\n");
        cntu++;
 }
    break;
    default:
    printf("la tua scelta non valida %d\n", scelta);
    break;
 }
    if (cntu<cntp && i==4)
    printf("hai perso");
    else if (cntu==cntp && i==4)
    printf("sei pareggi con il pc");
    else if (cntu>cntp && i==4)
    printf("hai vinto");
 }
}
