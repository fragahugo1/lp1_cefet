#include <stdio.h>

int main(){
	int num, count, resultado;
	
	
	for(num =1; num <=10; num++){
		for(count =1; count<=10; count++){
			resultado = num * count;
			
			if(num==10 || resultado >=10){
				printf("%d x %d = %d |", count, num, resultado);
			}
			else
				printf("%d x %d = %d  |", count, num, resultado);
		}
		printf("\n");
	}
	
	getchar();
	return 0;
}
