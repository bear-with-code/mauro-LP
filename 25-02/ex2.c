#include <stdio.h>

int main(){
	int a, b;
	
	printf("Digite o primeiro: ");
	scanf("%d", &a);
	
	printf("Digite o segundo: ");
	scanf("%d", &b);
	
	if (a > b){printf("Maior: %d\nMenor: %d", a, b);}
	if (a < b){printf("Maior: %d\nMenor: %d", b, a);}
	if (a == b){printf("Iguais");}
	
	return 0;
}
