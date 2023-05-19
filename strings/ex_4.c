#include <stdio.h>
#include <string.h>

int main(){
	char palavra[30];
	int count =0;
	
	gets(palavra);
	
	for(count; palavra[count] != '\0'; count++);
		
	for(count-=1; count>=0; count--)
		printf("%c", palavra[count]);
	
	return 0;
}
