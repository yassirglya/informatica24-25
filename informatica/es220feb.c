/*scrivi un programma che letto un numero intero visualizzi 
il quadrato del numero utilizzando il metodo delle somme successive 
il quadrato di un numero puo essere scritto come la somma dei primi N numeri dispari9*/

#include <stdio.h>

int main(){

void quadrato(int *_num , int *_somma);
int num, somma=0;

	do{
		printf("inserisci un numero : ")
		scanf("%d", &num);
	}while(num<0);
	
	quadrato(&num,&somma);
	printf("il quadrato di %d vale : %d ", num, somma);
}

void quadrato (int *_num, int*_somma){
	int dispari=1;
	
	for (int i=1; i<=*_num; i++){
		printf("%d\t",dispari)
		*_somma +=dispari;
		dispari+=2;
		
	}
}

