#include <stdio.h>

int main(){
	int op;
	
	printf("Informe o codigo do produto: ");
	scanf("%d%*C", &op);
	
	if(op==1)
	{
		printf("Alimento nao perecivel");
	}
	else if(op>1 && op<5)
	{
		printf("Alimento perecivel");
	}
	else if(op>4 && op<7)
	{
		printf("Vestuario");
	}
	else if(op>6 && op<=12)
	{
		printf("Limpeza");
	}
	else
	{
		printf("Opcao invalida");
	}
	
	getchar();
	return 0;
}
