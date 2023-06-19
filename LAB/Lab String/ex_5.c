#include <stdio.h>
#include <string.h>

int main(){
	char numeros[30];
	int count;
	
	gets(numeros);
	
	for(count=0; numeros[count]!='\0'; count++){
		if(numeros[count]=='0')
			numeros[count]='1';
	}
	
	puts(numeros);
	
	return 0;
}
