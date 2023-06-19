#include <stdio.h>

int main(){
	int numero, algarismo=0, tres=0;
	
	scanf("%d", &numero);
	
	for(numero; numero>10;){
		algarismo = numero % 10;
		numero = numero / 10;
		
		if(algarismo==3)
			tres++;
	}
	
	if(numero==3)
		tres++;
	
	printf("Digitos 3: %d", tres);
	
	return 0;
}
