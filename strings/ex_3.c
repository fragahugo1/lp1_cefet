#include <stdio.h>
#include <string.h>

int main(){
	char binario[20];
	int count =0, soma =0;
	
	gets(binario);
	
	for(count; binario[count] != '\0'; count++){
		if(binario[count] == '1')
			soma+=1;
	}
	
	printf("%d", soma);
	return 0;
}
