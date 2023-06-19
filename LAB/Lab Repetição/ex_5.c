#include <stdio.h>

int main(){
	int numeros=0;
	float valor, soma=0, media=0;
	
	scanf("%f", &valor);
	
	while(valor>0){
		numeros++;
		soma+=valor;
		media = soma/numeros;
		scanf("%f", &valor);
	}

	printf("Media: %4.2f", media);
	
	return 0;
}
