#include <stdio.h>

int main(){
	int numero;
	
	scanf("%d", &numero);
	
	if(numero%2==0)
		printf("Par");
	else 
		printf("Impar");
	
	return 0;
}
