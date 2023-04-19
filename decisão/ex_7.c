#include <stdio.h>

int main(){
	int op;
	float valorCompra, valorFinal, parcelas, juros;
	
	printf("Informe o valor da compra: R$");
	scanf("%f%*C", &valorCompra);
	printf("Informe a forma de pagamento: ");
	scanf("%d%*C", &op);
	
	switch(op){
		case 1:
			valorFinal = valorCompra * 0.92;
			printf("Valor a vista no dinheiro: R$%4.2f", valorFinal);
			break;
	
		case 2:
			valorFinal = valorCompra * 0.96;
			printf("Valor a vista no cartao: R$%4.2f", valorFinal);
			break;
			
		case 3:
			parcelas = valorCompra / 2;
			printf("Duas parcelas sem juros de: R$%4.2f", parcelas);
			break;
			
		case 4:
			valorFinal = valorCompra * 1.08;
			parcelas = valorFinal / 4;
			juros = valorCompra * 0.08;
		
			printf("Valor final da compra: R$%4.2f\n", valorFinal);
			printf("Quatro parcelas de: R$%4.2f\n", parcelas);
			printf("Juros de: R$%4.2f", juros);
			break;
			
		default:
			printf("Opcao invalida");
	}	
	
	getchar();
	return 0;
}
