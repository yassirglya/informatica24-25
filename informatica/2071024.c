/*STABILIRE SE UN NUMERO é DISPARI CONTROLLANDO 
    L'ULTIMA CIFRA MENO SIGNIFICATIVA*/
    #include <stdio.h>

    int main(){
        int num, cifre;
        
        printf("inserire un numero: ");
        scanf("%d" , &num);

        cifra= num%10;
        if(cifra%2==0)
            printf("il numero %d é pari", num);
        else
            printf("il numero %d é dispari", num);
            

        
    }