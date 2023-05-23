#include <stdio.h>

int main(){
	float numero, soma =0, media =0;
	int numeros =0;
	
	for(soma; soma < 100;){
		scanf("%f%*C", &numero);
		soma += numero;
		numeros++;
	}
	
	printf("Soma: %4.1f\n", soma);
	printf("Quantidade de numeros: %d\n", numeros);
	
	media = soma/numeros;
	printf("Media: %4.1f", media);
	
	return 0;
}
