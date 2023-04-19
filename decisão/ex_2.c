#include <stdio.h>

int main(){
	int idade;
	char nome[10];
	
	printf("Escreva seu nome: ");
	scanf("%s%*C", &nome);
	printf("Informe sua idade: ");
	scanf("%d%*C", &idade);
	
	if(idade<0)
	{
		printf("Nao existe idade menor que 0\n");
	}
	else if(idade>=0 && idade<=13)
	{
		printf("Crianca\n");
	}
	else if(idade>13 && idade<=20)
	{
		printf("Adolescente\n");
	}
	else
	{
		printf("Adulto\n");
	}
	
	getchar();
	return 0;
}
