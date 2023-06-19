#include <stdio.h>

int main(){
	int vMax, velocimetro, multa=0;
	
	scanf("%d\n%d", &vMax, &velocimetro);
	
	if(velocimetro>vMax){
		multa = (velocimetro-vMax)*5;
		printf("Multa a pagar: R$%d", multa);		
	}
	else 
		printf("Nao paga multa");
	
	return 0;
}
