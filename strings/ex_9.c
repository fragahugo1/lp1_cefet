#include <stdio.h>
#include <string.h>

int main(){
	char criptografia[50];
	int count =0;
	
	gets(criptografia);
	
	for(count; criptografia[count] != '\0'; count++){
		if(criptografia[count] >= 97 && criptografia[count] < 120)
			criptografia[count]-=29;
		else if(criptografia[count] >= 120 && criptografia[count] < 123)
			criptografia[count]-=55;
	}
	
	puts(criptografia);
	
	return 0;
}
