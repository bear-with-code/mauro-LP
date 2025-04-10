#include <stdio.h>
#include <locale.h>

void subtrai3(int *x);

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x; printf("Digite um número: ");
	scanf("%d", &x);
	
	printf("Recebido: %d\n", x);
	
	subtrai3(&x);
	printf("Resultado: %d\n", x);
	printf("Atual: %d\n", x);
}

void subtrai3(int *x){
	*x -= 3;
}
