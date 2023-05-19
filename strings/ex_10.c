#include <stdio.h>
#include <string.h>

int main(){
	char palavra[20];
	int count =0, diferentes =0, tamanho;

	gets(palavra);
	tamanho = strlen(palavra) - 1;
	
	for(; tamanho >= count ;){
		if(palavra[count] != palavra[tamanho])
			diferentes++;
		
		count++;
		tamanho--;
	}
	
	if(diferentes == 0)
		printf("Palindromo");
	else 
		printf("Nao e palindromo");
	
	return 0;
}
