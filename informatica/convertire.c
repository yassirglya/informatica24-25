int main(){
	float dollari=0;
	float euro=0;
	int scelta=0;
	
	printf("------ SCEGLI IL CAMBIO DA EFFETTUARE ----\n");
	printf("1. CAMBIO ---->  Dollaro->Euro\n");
	printf("2. CAMBIO ---->  Euro->Dollaro\n");
	printf("0. Termina programma \n");
	scanf("%d", &scelta);
	
	switch (scelta){
		case 1:{
			printf("Inserisci il valore in dollaro: \n");
			scanf("%f", &dollari);
			euro= (float)dollari/1.23;
			printf("%.2f dollari corrispondono a %.2f euro ", dollari, euro);
			break;
		}
		case 2:{
			printf("Inserisci il valore in euro: \n");
			scanf("%f", &euro);
			dollari= (float)euro*1.23;
			printf("%.2f euro corrispondono a %.2f dollari ", euro, dollari);
			break;
		}
		case 0:
			printf("Programma terminato. Grazie ");
			break;
		default:
			printf("Non hai inserito una delle scelte proposte ");
    }
    return 0;
}