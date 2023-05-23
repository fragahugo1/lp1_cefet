#include <stdio.h>

int main(){
	float saldo, ajuste=0;
	
	scanf("%f", &saldo);
	
	ajuste= saldo*1.02;
	printf("Ajuste: %4.2f", ajuste);
		
	return 0;
}
