#include <stdio.h>

int main(){
	float C, F=0;
	
	scanf("%f", &C);
	
	F=(9*C+160)/5;
	printf("F: %4.1f", F);
	
	return 0;
}
