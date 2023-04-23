#include <stdio.h>

int DigitoVerificador(int numero);
int numero, algarismo, soma =10;

int main(){
	printf("Numero: ");
	scanf("%d%*C", &numero);
	
	DigitoVerificador(numero);
	printf("Digito verificador: %d", soma);
	
	getchar();
	return 0;
}

int DigitoVerificador(int numero){
	for(soma; soma>=10;){
		soma = 0;
		for(numero; numero>0;){
			algarismo = numero % 10;
			soma += algarismo;
			numero = numero /10;
		}
		numero = soma;
	}
}
