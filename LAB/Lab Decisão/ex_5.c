#include <stdio.h>

int main(){
	float p1, p2, exame, media=0, notaFinal=0;
	
	scanf("%f\n%f", &p1, &p2);
	media = (p1+p2)/2;
	
	if(media>=70)
		printf("Aprovado");
	else if(media>=40){
		printf("Prova Final\n");
		scanf("%f", &exame);
		notaFinal = media + exame;
		
		if(notaFinal>=100)
			printf("Aprovado");
		else
			printf("Reprovado");
	}
	else 
		printf("Reprovado");
	
	return 0;
}
