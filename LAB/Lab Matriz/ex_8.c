#include <stdio.h>

int main(){
	float numeros[10], numero;
	int count, countDois, retorno;
	
	for(count=0; count<10;){
		scanf("%f", &numero);
		retorno=0;
		for(countDois=0; countDois<count; countDois++){
			if(numero == numeros[countDois])
				retorno = 1;
		}
		if(retorno == 0){
			numeros[count] = numero;
			count++;
		}
	}
	
	for(count=0; count<10; count++)
		printf(" %4.1f|", numeros[count]);
	
	return 0;
}
