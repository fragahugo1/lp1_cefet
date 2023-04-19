#include <stdio.h>

#define PI 3.14

int main(){
	char op;
	float lado, base, altura, raio, area, perimetro;
	
	printf("Q- Quadrado\nC- Circunferencia\nR- Retangulo\n");
	scanf("%c%*C", &op);
	
	switch(op){
		case 'Q':
			printf("Valor do lado: ");
			scanf("%f%*C", &lado);
			
			area = lado * lado;
			perimetro = lado * 4;
			
			printf("Area: %4.1f\n", area);
			printf("Perimetro: %4.1f", perimetro);
			break;
			
		case 'C':
			printf("Valor do raio: ");
			scanf("%f%*C", &raio);
			
			area = (PI *(raio * raio));
			perimetro = 2 * PI * raio;
			
			printf("Area: %4.1f\n", area);
			printf("Perimetro: %4.1f", perimetro);
			break;
			
		case 'R':
			printf("Valor da base: ");
			scanf("%f%*C", &base);
			printf("Valor da altura: ");
			scanf("%f%*C", &altura);
			
			area = base * altura;
			perimetro = ((base * 2)+(altura * 2));
			
			printf("Area: %4.1f\n", area);
			printf("Perimetro: %4.1f", perimetro);
			break;
	}
	
	getchar();
	return 0;
}
