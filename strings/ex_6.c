#include <stdio.h>
#include <string.h>

int main(){
	char frase[100], frase_dois[100];
	int count =0, count_dois =0, space =0;
		
	gets(frase);
	
	for(count; frase[count] != '\0'; count++){
		if(frase[count] == ' ')
			space+=1;
		else if(frase[count] != ' '){
			frase_dois[count_dois] = frase[count];
			count_dois++;	
		}
	}
	
	printf("Blank spaces: %d\n", space);
	puts(frase_dois);
	
	return 0;
}
