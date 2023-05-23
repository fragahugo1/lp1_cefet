#include <stdio.h>

int main(){
	float n1, n2, add=0, sub=0, mpy=0, div=0;
	
	scanf("%f\n%f", &n1, &n2);
	
	add= n1+n2;
	sub= n1-n2;
	mpy= n1*n2;
	div= n1/n2;
	
	printf("Add: %4.1f\nSub: %4.1f\nMpy: %4.2f\nDiv: %4.2f", add, sub, mpy, div);
	
	return 0;
}
