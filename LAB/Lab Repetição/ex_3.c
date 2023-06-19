#include <stdio.h>

int main(){
	int dividendo, divisor, quociente=0, resto=0;
	
	scanf("%d\n%d", &dividendo, &divisor);
	
	for(; resto<=dividendo ;){
		resto+=divisor;
		quociente++;
	}
	
	quociente--;
	resto = (dividendo - resto) + divisor;
	
	printf("Quociente: %d\nResto: %d", quociente, resto);
	
	return 0;
}
