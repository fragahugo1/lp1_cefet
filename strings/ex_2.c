#include <stdio.h>
#include <string.h>

_Bool strComparar(char strA[], char strB[]);

int main(){
	char strA[20], strB[20];
	
	gets(strA);
	gets(strB);

	if(strComparar(strA, strB))
		printf("Strings iguais");
	else
		printf("Strings diferentes");	
	
	return 0;
}

_Bool strComparar(char strA[], char strB[]){
	int count =0;
	
	for(count; strA[count] == strB[count] && strA[count] != '\0' && strB[count] != '\0'; count++);
	
	if(strA[count] == '\0' && strB[count] == '\0')
		return 1;
	else 
		return 0;
}
