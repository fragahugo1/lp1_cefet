#include <stdio.h>
#include <string.h>

int main(){
	char nome[30];
	int countS=0, countN=0;
	
	gets(nome);
	
	for(countS; nome[countS] != ' '; countS++);
	countS = countS + 1;
	
	for(countS; nome[countS] != '\0'; countS++)
		printf("%c", nome[countS]);
	
	printf(", ");
	
	for(countN; nome[countN] != ' '; countN++)
		printf("%c", nome[countN]);

	return 0;
}
