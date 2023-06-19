#include <stdio.h>

int main(){
	int vetor[3], matriz[3][3], countLinha, countColuna;
	
	for(countColuna=0; countColuna<3; countColuna++)
		scanf("%d", &vetor[countColuna]);	
			
	for(countLinha=0; countLinha<3; countLinha++){
		for(countColuna=0; countColuna<3; countColuna++){
			scanf("%d", &matriz[countLinha][countColuna]);
			if(countLinha==0)
				matriz[countLinha][countColuna]*=vetor[countColuna]; 
		}
	}
	
	for(countLinha=0; countLinha<3; countLinha++){
		for(countColuna=0; countColuna<3; countColuna++)
			printf(" %d|", matriz[countLinha][countColuna]);
		printf("\n");
	}

	return 0;
}
