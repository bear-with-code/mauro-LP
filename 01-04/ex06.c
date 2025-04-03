#include <stdio.h>

void main(){
	puts("Tabela-verdade de NOT (!)");
	
	for(int i = 0; i < 2; i++){
		printf("\nA: %d\t!%d = %d", i, i, !i);
	}
}
