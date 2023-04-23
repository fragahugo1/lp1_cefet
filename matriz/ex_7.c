#include <stdio.h>

int main(){
	int numeros[20], numero, pares =0, impares =0, count =0;
	
	while(count<20){
		scanf("%d%*C", &numero);
		numeros[count] = numero;
		
		if(numeros[count] % 2 == 0){
			pares++;
		}
		else
		{
			impares++;
		}
	
		count++;
	}
	
	printf("%d sao pares\n", pares);
	printf("%d sao impares", impares);
	
	getchar();
	return 0;
}
