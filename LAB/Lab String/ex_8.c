#include <stdio.h>
#include <string.h>

int main(){
	char string[30];
	int count, space=0;
	
	gets(string);
	
	for(count=0; string[count]!='\0'; count++){
		if(string[count]==' ')
			space++;
	}
		
	printf("Space: %d", space);
	
	return 0;
}
