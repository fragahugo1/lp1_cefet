#include <stdio.h>

int main(){
	int ano=0;
	float alturaC=1.50, alturaZ=1.10;
	
	for(ano; alturaZ<=alturaC; ano++){
		alturaC+=0.2;
		alturaZ+=0.3;
	}
	
	printf("%d anos", ano);
	
	return 0;
}
