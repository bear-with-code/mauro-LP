#include <stdio.h>
#include <locale.h>

int subtrai3(int x);

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x; printf("Digite um número: ");
	scanf("%d", &x);
	
	printf("Recebido: %d\n", x);
	printf("Resultado: %d\n", subtrai3(x));
	printf("Atual: %d\n", x);
}

int subtrai3(int x){
	return x - 3;
}
