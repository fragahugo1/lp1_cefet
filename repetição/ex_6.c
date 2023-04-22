#include <stdio.h>

int main(){
	float p1, p2, p3, media, maiorMedia, menorMedia, mediaTurma, totalMedias;
	int continuar =1, alunos =1, primeiraMedia =1;
	
	while(continuar==1){
		scanf("%f%*C", &p1);
		scanf("%f%*C", &p2);
		scanf("%f%*C", &p3);
		
		media = (p1+p2+p3)/3;
		printf("Media aluno %d: %4.1f\n", alunos, media);
		
		if(primeiraMedia==1){
			maiorMedia = media;
			menorMedia = media;
			mediaTurma = media;
			totalMedias = media;
			primeiraMedia =0;
		}
		else if(primeiraMedia==0){
			totalMedias += media;
			mediaTurma = totalMedias/alunos;
		}
		
		if(media > maiorMedia){
			maiorMedia = media;
		}
		else if(media < menorMedia){
			menorMedia = media;
		}
		
		printf("Continuar: 1-Sim 0-Nao\n");
		scanf("%d%*C", &continuar);
		
		alunos++;
	}
	
	printf("Maior media: %4.1f\n", maiorMedia);
	printf("Menor media: %4.1f\n", menorMedia);
	printf("Media turma: %4.1f", mediaTurma);
	
	getchar();
	return 0;
}
