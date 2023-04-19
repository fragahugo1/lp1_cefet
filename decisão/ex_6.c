#include <stdio.h>

int main(){
	char op;
	float numeroUm, numeroDois, resultado;
	
	printf("'-' - Subtracao\n'+' - Soma\n'/' - Divisao\n'*' - Multiplicacao\n");
	scanf("%c%*C", &op);
	
	printf("Primeiro numero: ");
	scanf("%f%*C", &numeroUm);
	printf("Segundo numero: ");
	scanf("%f%*C", &numeroDois);
	
	switch(op){
		case '-': 
			resultado= numeroUm - numeroDois;
			printf("Resultado: %4.1f", resultado);
			break;
			
		case '+':
			resultado= numeroUm + numeroDois; 
			printf("Resultado: %4.1f", resultado);
			break;
			
		case '/':
			resultado= numeroUm / numeroDois; 
			printf("Resultado: %4.1f", resultado);
			break;
			
		case '*':
			resultado= numeroUm * numeroDois; 
			printf("Resultado: %4.1f", resultado);
			break;
			
		default: 
			printf("Operacao invalida");
	}
	
	getchar();
	return 0;
}
