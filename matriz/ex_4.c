#include <stdio.h>

int main(){
	float progressao[10], valorInicial, razao;
	int count =0;
	
	printf("Valor inicial da PA e sua razao: ");
	scanf("%f%*C", &valorInicial);
	scanf("%f%*C", &razao);
	
	progressao[count] = valorInicial;
	printf("%4.1f| ", progressao[count]);
	
	for(count =1; count<10; count++){
		progressao[count] = valorInicial + (count*razao);
		printf("%4.1f| ", progressao[count]);
	}
	
	getchar();
	return 0;
}
