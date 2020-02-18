#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
	
	srand(time(NULL));
	
	int i, numeros[6], sorteio[6], cont = 0, aux[6], j;
	
	printf("Digite os Numeros da Sena: ");
	for(i = 0; i < 6; i++){
		do{
			scanf("%i", &numeros[i]);	
		}while(numeros[i] < 0 || numeros[i] > 60);
		
		aux[i] = numeros[i];
		
		for(j = 0; j < i; j++){
			do{
				if(aux[j] == numeros[i]){
					printf("numero ja existente jogue outro: ");
					scanf("%i", &numeros[i]);
				}
			}while(aux[j] == numeros[i]);
		} 
	}
	
	printf("Numeros da SENA: ");
	for(i = 0; i < 6; i++){
		sorteio[i] = 1 + rand() % 60;
		printf("%i ", sorteio[i]);
	}
	
	for(i = 0; i < 6; i++){
		if(numeros[i] == sorteio[i]){
			cont++;
		}
	}
	
	if(cont == 4){
		printf("Voce tem uma boa Sorte, acertou 4 numeros da SENA");
	}
	else if(cont == 5){
		printf("Voce tem uma boa Sorte, acertou 5 numeros da SENA");
	}
	else if(cont == 6){
		printf("Voce TA MILIONARIO, COMEMORA TIO <3");
	}
	else{
		printf("\n\n[QUE AZAR EM AMIGAO]");
	}
	
	
	return 0;
}
