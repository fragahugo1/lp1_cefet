#include <stdio.h>

int main(){
	int numero =0, check, somaPares =0, somaImpares =0;
	
	while(numero<=1000){
		scanf("%d%*C", &numero);
		
		if((numero%2)==0 && numero<=1000 && numero>0){
			somaPares += numero;
		}
		else if((numero%2)!=0 && numero<=1000 && numero>0)
		{
			somaImpares += numero;
		}
	}
	
	printf("Soma dos pares: %d\n", somaPares);
	printf("Soma dos impares: %d", somaImpares);
	
	getchar();
	return 0;
}
