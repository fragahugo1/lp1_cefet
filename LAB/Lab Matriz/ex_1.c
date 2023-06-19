#include <stdio.h>

int main(){
	float matrizUm[2][3], matrizDois[2][3], soma=0;
	int countLinha, countColuna;
	
	for(countLinha=0; countLinha<2; countLinha++){
		for(countColuna=0; countColuna<3; countColuna++){
			scanf("%f", &matrizUm[countLinha][countColuna]);
			soma += matrizUm[countLinha][countColuna];
		}
	}
	
	for(countLinha=0; countLinha<2; countLinha++){
		for(countColuna=0; countColuna<3; countColuna++){
			scanf("%f", &matrizDois[countLinha][countColuna]);
			soma += matrizDois[countLinha][countColuna];
		}
	}
	
	printf("Soma: %4.2f\n", soma);
	
	return 0;
}
