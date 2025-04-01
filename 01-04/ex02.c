#include <stdio.h>

void main(){
	puts("Jogo de Par \n");
	
	int n = -1, soma = 0;
	do{
		printf("Digite um numero par [1 - 6]: "); scanf("%d", &n);
		soma = (n % 2 == 0) ? soma + n : soma;
		
		if(n % 2 != 0){printf("\nVish, numero impar.\n"); break;}
	}
	while(0 == 0);
	
	printf("Soma final = %d", soma);
}
