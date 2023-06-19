#include <stdio.h>

int main(){
	int numero, count, divisores=0;
	
	scanf("%d", &numero);
	
	for(count=1; count<=numero; count++){
		if(numero%count==0)
			divisores++;
	}
	
	if(divisores==2)
		printf("Primo");
	else
		printf("Nao primo");
		
	return 0;
}
