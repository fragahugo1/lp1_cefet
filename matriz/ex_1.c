#include <stdio.h>

int main(){
	float numeros[10], maiorNumero;
	int count =0, primeiroNumero =1, indice;
	
	while(count <10){
		scanf("%f%*C", &numeros[count]);
		
		if(primeiroNumero ==1){
			maiorNumero = numeros[count];
			indice = count;
			primeiroNumero =0;
		}
		
		if(numeros[count] > maiorNumero){
			maiorNumero = numeros[count];
			indice = count;
		}
		
		count++;
	}
	
	printf("\nMaior numero: %4.1f", maiorNumero);
	printf("\nIndice do elemento: %d", indice);
	
	getchar();
	return 0;
}
