#include <stdio.h>

#define PI 3.14

int main(){
	
	int op;
	//calculos
	float lado, base, altura, baseMaior, baseMenor, raio, resultado;
	
	printf("1- Area Quadrado\n2- Area Retangulo\n3- Area Trapezio\n4- Area Circulo\n5- Circunferencia Circulo\n");
	scanf("%d%*C", &op);
	
	switch(op){
		case 1:
			printf("Valor do lado: ");
			scanf("%f%*C", &lado);
			
			resultado = lado * lado;
			printf("Resultado: %4.1f", resultado);
			break;
		
		case 2:
			printf("Valor da base: ");
			scanf("%f%*C", &base);
			printf("Valor da altura: ");
			scanf("%f%*C", &altura);
			
			resultado = base * altura;
			printf("Resultado: %4.1f", resultado);
			break;
		
		case 3: 
			printf("Valor da base menor: ");
			scanf("%f%*C", &baseMenor);
			printf("Valor da base maior: ");
			scanf("%f%*C", &baseMaior);
			printf("Valor da altura: ");
			scanf("%f%*C", &altura);
			
			resultado = ((baseMaior + baseMenor)/2)* altura;
			printf("Resultado: %4.1f", resultado);
			break;
		
		case 4: 
			printf("Valor do raio: ");
			scanf("%f%*C", &raio);
			
			resultado = (PI *(raio * raio));
			printf("Resultado %4.1f", resultado);
			break;
		
		case 5:
			printf("Valor do raio: ");
			scanf("%f%*C", &raio);
			
			resultado = 2 * PI * raio;
			printf("Resultado: %4.1f", resultado);
			break;
	}
	
	getchar();
	return 0;
}
