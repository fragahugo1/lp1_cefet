#include <stdio.h>
#include <string.h>

int main(){
	char palavra[50];
	int count =0;
	
	gets(palavra);
	
	for(count; palavra[count] != '\0'; count++)
		palavra[count]+=1;
	
	puts(palavra);
	
	return 0;
}
