#include <stdio.h>

int main(){
	int x, y, z;
	
	scanf("%d\n%d\n%d", &x, &y, &z);
	
	if(x==y && y==z)
		printf("Equilatero");
	else if(x!=y && y!=z && z!=x)
		printf("Escaleno");
	else
		printf("Isosceles");
	
	return 0;
}
