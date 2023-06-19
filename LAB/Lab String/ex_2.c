#include <stdio.h>
#include <string.h>

int main(){
	char string[30];
	int count;
	
	gets(string);
	
	for(count=0; string[count]!='\0'; count++);
	
	printf("Tamanho: %d", count);
	
	return 0;
}
