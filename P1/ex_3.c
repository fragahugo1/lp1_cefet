#include <stdio.h>

int main(){
	int op, continuar =1;
	float C, F, K, R, Re;
	
	while(continuar == 1){
		C=0; F=0; K=0; R=0; Re=0;
		
		scanf("%f%*C", &C);
		scanf("%d%*C", &op);
		
		switch(op){
			case 1: 
				F = (C*1.8)+32;
				printf("F: %4.2f\n", F); break;
			
			case 2: 
				K = C+273.15;
				printf("K: %4.2f\n", K); break;
				
			case 3:
				R = ((C*1.8)+32)+459.67;
				printf("R: %4.2f\n", R); break;
			
			case 4: 
				Re = C*0.8;
				printf("Re: %4.2f\n", Re); break;
				
			default:
				printf("Operador invalido\n");
		}
		
		printf("Continuar? 1- Sim   0- Nao\n");
		scanf("%d%*C", &continuar);
	}
	
	return 0;
}
