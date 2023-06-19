#include <stdio.h>

int main(){
	float matrizUm[3][2], matrizDois[2][3], somaUm=0, somaDois=0, mpy=0;
	int countLinha, countColuna;
	
	for(countLinha=0; countLinha<3; countLinha++){
		for(countColuna=0; countColuna<2; countColuna++){
			scanf("%f", &matrizUm[countLinha][countColuna]);
			somaUm += matrizUm[countLinha][countColuna];
		}
	}
	
	for(countLinha=0; countLinha<2; countLinha++){
		for(countColuna=0; countColuna<3; countColuna++){
			scanf("%f", &matrizDois[countLinha][countColuna]);
			somaDois += matrizDois[countLinha][countColuna];
		}
	}
	
	mpy = somaUm*somaDois;
	printf("MPY: %4.2f", mpy);
	
	return 0;
}
