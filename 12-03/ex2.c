#include <stdio.h>

int main(){
	int x, y;
	
	printf("Digite dois numeros inteiros\n\n");
	
	printf("Primeiro numero: "); scanf("%d", &x);
	printf("Segundo numero: "); scanf("%d", &y);
	
	printf("\nO maior deles: %d", x > y ? x : y);
}
