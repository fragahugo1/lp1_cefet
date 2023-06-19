#include <stdio.h>

int main(){
	float n1, n2, resultado=0;
	char op;
	
	scanf("%f\n%f\n%c", &n1, &n2, &op);
	
	switch(op){
		case '+':
			resultado = n1+n2;
			printf("Resultado: %4.2f", resultado); break;
		
		case '-':
			resultado = n1-n2;
			printf("Resultado: %4.2f", resultado); break;
		
		case '*':
			resultado = n1*n2;
			printf("Resultado: %4.2f", resultado); break;
		
		case '/':
			resultado = n1/n2;
			printf("Resultado: %4.2f", resultado); break;	
		
		default: 
			printf("Operador invalido");
	}
	
	return 0;
}
