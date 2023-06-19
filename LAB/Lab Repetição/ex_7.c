#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, valor, count=0;
	
	/* gerando valores aleatórios entre zero e 500 */
	num = rand() % 500;
	
	while(valor!=num){
		scanf("%d", &valor);
		count++;
	}
	
	if(count>0 && count<=3)
		printf("Muito sortudo");
	else if(count<=6)
		printf("Sortudo");
	else if(count<=10)
		printf("Normal");
	else
		printf("Tente novamente");
		
	/* exibindo na tela o valor gerado */
	printf ("\n%d ", num);
 
	return 0;
 }

