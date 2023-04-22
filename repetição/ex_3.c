#include <stdio.h>

int main(){
	float numero =1, resultado =1; 
	
	while(numero!=0){
		scanf("%f%*C", &numero);
		
		if(numero!=0){
			resultado *= numero; 
		}
	}
	
	printf("Resultado: %4.1f", resultado);
	
	getchar();
	return 0;
}
