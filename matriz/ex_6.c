#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int numeros[10], numero, count =0, primeiroNumero =1;
	
	srand(time(NULL));
	
	for(count; count<10; count++){
			numeros[count] = rand() % 20;
			printf("%d |", numeros[count]);
			primeiroNumero =0;
	}
	printf("\n");
	
	scanf("%d%*C", &numero);
	
	for(count =0; count<10; count++){
		if(numero == numeros[count]){
			printf("Indice: %d\n", count);
		}
	}
	
	getchar();
	return 0;
}
