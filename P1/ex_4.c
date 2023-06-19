#include <stdio.h>

int main(){
	int DD, MM, AA, DNiver, MNiver, ANiver, idade=0;
	
	printf("Data: ");
	scanf("%d\n%d\n%d", &DD, &MM, &AA);
	printf("Aniversario: ");
	scanf("%d\n%d\n%d", &DNiver, &MNiver, &ANiver);
	
	idade = AA - ANiver;
	
	if(MM < MNiver)
		idade = idade - 1;
	else if(MM == MNiver && DD < DNiver)
		idade = idade - 1;
	
	printf("Idade: %d", idade);
	
	return 0;
}
