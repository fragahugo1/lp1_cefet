#include <stdio.h>

int main(){
	float numeros[10], menorNumero;
	int count =0, indice, primeiroNumero =1;
	
	while(count<10){
		scanf("%f%*C", &numeros[count]);
		
		if(primeiroNumero ==1){
			menorNumero = numeros[count];
			indice = count;
			primeiroNumero = 0;
		}
		
		if(numeros[count] < menorNumero){
			menorNumero = numeros[count];
			indice = count;
		}
		
		count++;
	}
	
	printf("\nMenor numero: %4.1f", menorNumero);
	printf("\nIndice do elemento: %d", indice);
	
	getchar();
	return 0;
}
