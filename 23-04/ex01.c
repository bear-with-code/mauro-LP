#include <stdio.h>
#include <locale.h>
#define TAMANHO 5

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x[TAMANHO] = {1, 2, 40, -8, 0};
	
	for(int i = 0; i < TAMANHO; i++){
		printf("x[%d] = %2d", i, x[i]);
		printf((i < TAMANHO-1) ? "\n" : "");
	}
	
	
	return 0;
}
