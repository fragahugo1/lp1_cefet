#include <stdio.h>

int main(){
	float numero = 0;
	
	printf("Escreva um numero qualquer: ");
	scanf("%f%*C", &numero);
	
	if(numero>0)
	{
		printf("%2.1f maior que zero", numero);
	}
	else if(numero<0)
	{
		printf("%2.1f menor que zero", numero);		
	}
	else
	{
		printf("%2.1f = zero", numero);
	}
	
	getchar();
	return 0;
}
