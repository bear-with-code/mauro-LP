#include <stdio.h>

void main(){
	int n, s = 0; 
	
	puts("Calculadora de impares\n");
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("[");
	for(int i = 1; i <= n; i += 2){
		s += i; printf("%d", i);
		if((i + 2) <= n){printf(" + ");}
	}
	printf("]\n");
	
	printf("Soma = %d\n", s);
}
