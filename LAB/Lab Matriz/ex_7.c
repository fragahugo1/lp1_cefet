#include <stdio.h>

int main(){
	char respostas[5][10], gabarito[10];
	int resultado[5], countLinha, countColuna;
	
	for(countLinha=0; countLinha<5; countLinha++){
		for(countColuna=0; countColuna<10; countColuna++){
			printf("Notas Aluno %d: ", countLinha);
			scanf("%s", &respostas[countLinha][countColuna]);
		}
	}
	
	for(countColuna=0; countColuna<10; countColuna++){
		printf("Gabarito Q%d: ", countColuna);
		scanf("%s", &gabarito[countColuna]);
	}
	
	for(countLinha=0; countLinha<5; countLinha++){
		resultado[countLinha]=0;
		for(countColuna=0; countColuna<10; countColuna++){
			if(respostas[countLinha][countColuna]==gabarito[countColuna])
				resultado[countLinha]+=1;
		}
		printf("Resultado Aluno %d: %d\n", countLinha, resultado[countLinha]);
	}

	return 0;
}
