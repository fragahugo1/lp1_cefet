#include <stdio.h>
#include <string.h>

int main(){
	char nome[15];
	int count;
	
	gets(nome);
	for(count=0; count<4; count++)
		printf("%c", nome[count]);
	
	return 0;
}
