#include <stdio.h>
#include <string.h>

int main(){
	char alfabeto[26];
	int count =0;
	
	gets(alfabeto);
	
	for(count; alfabeto[count] != '\0'; count++){
		if(alfabeto[count] > 96 && alfabeto[count] < 123)
			alfabeto[count]-=32;
		else
			alfabeto[count]+=32;
	}
	
	puts(alfabeto);
	
	return 0;
}
