#include <stdio.h>

int main(){
	float n1, n2, n3, media=0;
	
	scanf("%f\n%f\n%f", &n1, &n2, &n3);
	
	media = (n1+n2+n3)/3;
	printf("Media: %4.2f", media);
	
	return 0;
}
