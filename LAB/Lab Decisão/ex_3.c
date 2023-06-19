#include <stdio.h>

int main(){
	float n1, n2, n3, maior=0, menor=0, meio=0;
	
	scanf("%f%*C", &n1);
	maior = n1;
	menor = n1;
	meio = n1;
	
	scanf("%f%*C", &n2);
	if(n2>maior)
		maior = n2;
	else if(n2<menor)
		menor = n2;
	
	scanf("%f%*C", &n3);
	if(n3>maior)
		maior = n3;
	else if(n3<menor)
		menor = n3;

	if(n2>menor && n2<maior)
		meio = n2;
	else if(n3>menor && n3<maior)
		meio = n3;
	
	printf("Maior: %4.2f\nMenor: %4.2f\nMeio: %4.2f", maior, menor, meio);
	
	return 0;
}
