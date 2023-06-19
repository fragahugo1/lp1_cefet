#include <stdio.h>

int main(){
	int matriz[4][4], countLinha, countColuna, maiorLinha=0, maiorColuna=0, maior=0, primeiro=1;
	
	for(countLinha=0; countLinha<4; countLinha++){
		for(countColuna=0; countColuna<4; countColuna++){
			
			scanf("%d", &matriz[countLinha][countColuna]);
			if(primeiro==1){
				maiorLinha = countLinha;
				maiorColuna = countColuna;
				maior = matriz[countLinha][countColuna];
				primeiro=0;
			}
			else if(matriz[countLinha][countColuna]>maior){
				maiorLinha = countLinha;
				maiorColuna = countColuna;
				maior = matriz[countLinha][countColuna];
			}
		}
	}
	
	for(countLinha=0; countLinha<4; countLinha++){
		for(countColuna=0; countColuna<4; countColuna++){
			printf(" %d|", matriz[countLinha][countColuna]);
		}
		printf("\n");
	}
	
	printf("Maior: %d (%d, %d)", maior, maiorLinha, maiorColuna);

	return 0;
}
