#include <stdio.h>

int main(){
	int seg;
	float min=0, h=0;
	
	scanf("%d", &seg);
	min=seg/60;
	h=min/60;
	
	printf("Min: %4.2f\nHoras: %4.2f", min, h);
	return 0;
}
