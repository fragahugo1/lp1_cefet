#include <stdio.h>

int main(){
	int numeros[50], count =0, op =1;
	
	while(count<50){
		scanf("%d%*C", &numeros[count]);
		count++;
	}
	count =0;
	
	printf("1- Indices pares\n2- Indices impares\n3- Vetor inverso\n4- Nenhum\n");
	scanf("%d%*C", &op);
	
	switch(op){
		case 1:
			for(count; count<50; count++){
				if(count % 2==0){
						printf("%d |", numeros[count]);
				}
			}
			break;
		
		case 2:
			for(count; count<50; count++){
				if(count % 2!=0){
						printf("%d |", numeros[count]);
				}
			}
			break;
			
		case 3:
			for(count =49; count>=0; count--){
				printf("%d |", numeros[count]);
			}
			break;
			
		default:
			printf("FIM");
	}
	
	getchar();
	return 0;
}
