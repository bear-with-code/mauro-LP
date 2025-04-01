#include <stdio.h>

void main(){
	puts("Tabela-verdade de OU (||)");
	
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("\nA: %d  B: %d\t%d || %d = %d", i, j, i, j, i || j);
		}
	}

}
