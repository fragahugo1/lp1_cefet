#include <stdio.h>

int main(){
	float lado, area=0;
	int  numLados; 
	
	scanf("%f\n%d", &lado, &numLados);
	
	switch(numLados){
		case 3:
			area = lado*lado*1.73/4;
			printf("Area triangulo: %4.2f", area); break;
	
		case 4:
			area = lado*lado;		
			printf("Area quadrado: %4.2f", area); break;
			
		case 6:
			area = 6*lado*lado*1.73/4;
			printf("Area hexagono: %4.2f", area); break;
		
		default:
			printf("Nao sei calcular a area");
	}
	
	return 0;
}
