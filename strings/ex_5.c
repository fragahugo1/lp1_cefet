#include <stdio.h>
#include <string.h>

int main(){
	char palavra[15], caractere;
	int count =0, vogais =0;
	
	gets(palavra);
	scanf("%c%*C", &caractere);
	
	for(count; palavra[count] != '\0'; count++){
		if(palavra[count] == 'a' || palavra[count] == 'e' || palavra[count] == 'i' || palavra[count] == 'o' || palavra[count] == 'u'){
			vogais+=1;
			palavra[count] = caractere;
		}
	}
	
	printf("Soma vogais: %d\n", vogais);
	puts(palavra);
	
	return 0;
}
