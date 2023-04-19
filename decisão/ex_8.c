#include <stdio.h>

int main(){
	float altura, peso, imc;
	
	printf("Informe sua altura: ");
	scanf("%f%*C", &altura);
	printf("Informe seu peso: ");
	scanf("%f%*C", &peso);
	
	imc = (peso/(altura * altura));
	
	if(imc<=18.5)
	{
		printf("Abaixo do peso normal");
	}
	else if(imc>18.5 && imc<=25)
	{
		printf("Peso normal");
	}
	else if(imc>25 && imc<=30)
	{
		printf("Peso acima do normal");
	}
	else
	{
		printf("Peso excessivo");
	}
	
	getchar();
	return 0;
}
