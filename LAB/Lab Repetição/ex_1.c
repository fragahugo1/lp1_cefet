#include <stdio.h>

int main(){
	int count, divisores, soma=0;
	
	for(count=1; count<=100; count++){
		for(divisores=1; divisores<count; divisores++){
			if(count%divisores==0){
				soma+=divisores;
			}
		}
		
		if(soma==count)
			printf("%d\n", count);
		
		soma=0;
	}
	
	return 0;
}
