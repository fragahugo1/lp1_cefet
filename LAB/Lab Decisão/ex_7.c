#include <stdio.h>

int main(){
	int ht;
	float vh, salario=0;
	
	scanf("%d\n%f", &ht, &vh);
	
	if(ht<=40){
		salario = vh*ht;
		printf("Salario: R$%4.2f", salario);
	}
	else if(ht<=60){
		salario = (vh*ht) * 1.50;
		printf("Salario: R$%4.2f", salario);
	}
	else{
		salario = (vh*ht) * 2;
		printf("Salario: R$%4.2f", salario);
	}
	
	return 0;
}
