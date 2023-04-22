#include <stdio.h>

int main(){
	int count = 0, primeiroNumero = 1;
	float numero, numeroMaior, numeroMenor;
	
	printf("Escreva 15 numeros:\n");
	
	while(count<15){
		scanf("%f%*C", &numero);
		
		if(primeiroNumero == 1){
			numeroMaior = numero;
			numeroMenor = numero;
			primeiroNumero = 0;
		}
		
		if(numero > numeroMaior){
			numeroMaior = numero;
		}
		else if (numero < numeroMenor){
			numeroMenor = numero;
		}
		
		count++;
	}
	
	printf("Maior numero: %4.1f\n", numeroMaior);
	printf("Menor numero: %4.1f", numeroMenor);
	
	getchar();
	return 0;
}
