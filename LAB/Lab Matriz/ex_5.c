#include <stdio.h>

int main(){
	int matriz[5][5], countLinha, countColuna;
	
	for(countLinha=0; countLinha<5; countLinha++){
		for(countColuna=0; countColuna<5; countColuna++){
			if(countLinha==countColuna)
				printf(" 1|");
			else
				printf(" 0|");
		}
		printf("\n");
	}
	
	return 0;
}
