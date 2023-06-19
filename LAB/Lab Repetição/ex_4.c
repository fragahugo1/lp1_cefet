#include <stdio.h>

int main(){
	int tabletes, valores, soma=0;
	
	for(tabletes=0; tabletes<=6; tabletes++){
		for(valores=0; valores<=tabletes; valores++){
			if(valores==4 || tabletes==4){
				soma+=4;
				if(valores==4 && tabletes==4)
					soma+=4;
			}
		}
	}
	
	printf("Soma de quatros: %d", soma);
	
	return 0;
}
