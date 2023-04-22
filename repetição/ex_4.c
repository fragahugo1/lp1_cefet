#include <stdio.h>

int main(){
	float massaFinal, massaInicial, massaPerdida, horas, minutos, segundos =0;

	printf("Massa inicial: ");
	scanf("%f%*C", &massaInicial);
	
	massaPerdida = massaInicial * 0.01;
	
	for(massaFinal=massaInicial; massaFinal>=0.5;){
		massaFinal -= massaPerdida;
		segundos++;
	}
	
	minutos = segundos/60;
	horas = minutos/60;
	
	printf("Massa inicial e final: %4.2f -> %4f\n", massaInicial, massaFinal);
	printf("Tempo: %f horas, %f minutos e %f segundos", horas, minutos, segundos);
	
	getchar();
	return 0;
}
