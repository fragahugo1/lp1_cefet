#include <stdio.h>

int main(){
	float numero[10], maiorNumero, menorNumero;
	int count =0, primeiroNumero =1, indiceMaior, indiceMenor;
	
	while(count<10){
		scanf("%f%*C", &numero[count]);
		
		if(primeiroNumero ==1){
			maiorNumero = numero[count];
			menorNumero = numero[count];
			indiceMaior = count;
			indiceMenor = count;
			
			primeiroNumero =0;
		}
		
		if(numero[count] > maiorNumero){
			maiorNumero = numero[count];
			indiceMaior = count;
		}
		else if(numero[count] < menorNumero){
			menorNumero = numero[count];
			indiceMenor = count;
		}
		
		count++;
	}
	
	printf("\nMaior numero: %4.1f de indice %d", maiorNumero, indiceMaior);
	printf("\nMenor numero: %4.1f de indice %d", menorNumero, indiceMenor);
	
	getchar();
	return 0;
}
