#include <stdio.h>

int main(){
	float peso, altura, imc =0; 
	
	scanf("%f%*C", &peso);
	scanf("%f%*C", &altura);
	
	imc = peso/(altura*altura);
	
	while(altura > 0){
		if(imc <= 18.5)
			printf("Abaixo do peso normal\n");
		else if(imc <= 25)
			printf("Peso normal\n");
		else if(imc <= 30)
			printf("Peso acima do normal\n");
		else 
			printf("Peso excessivo\n");
		
		scanf("%f%*C", &peso);
		scanf("%f%*C", &altura);
		imc = peso/(altura*altura);
	}
	
	return 0;
}
