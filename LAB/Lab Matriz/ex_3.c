#include <stdio.h>

int main(){
	float matriz[3][3], numero;
	int countLinha, countColuna;
	
	for(countLinha=0; countLinha<3; countLinha++){
		for(countColuna=0; countColuna<3; countColuna++){
			scanf("%f", &matriz[countLinha][countColuna]);
			matriz[countLinha][countColuna]*=5;
		}
	}
	
	for(countLinha=0; countLinha<3; countLinha++){
		for(countColuna=0; countColuna<3; countColuna++)
			printf(" %4.2f|", matriz[countLinha][countColuna]);
		printf("\n");
	}
	
	return 0;
}
