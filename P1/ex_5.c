#include <stdio.h>

int main(){
	float notas[20][3], media=0, mediaTurma=0;
	int countLinha, countColuna, continuar=1;
	
	while(continuar==1){
		for(countLinha=0; countLinha<20; countLinha++){
			media=0;
			for(countColuna=0; countColuna<3; countColuna++){
				printf("Notas Aluno %d: ", countLinha);
				scanf("%f", &notas[countLinha][countColuna]);
				media+=notas[countLinha][countColuna];
			}
			media/=3;
			printf("Media Aluno: %4.2f\n", media);
			mediaTurma+=media;
		}
	
		printf("Continuar? 1-SIM 0-NAO\n");
		scanf("%d", &continuar);
	}
	
	mediaTurma/=20;
	printf("Media Turma: %4.2f", mediaTurma);
	
	return 0;
}
