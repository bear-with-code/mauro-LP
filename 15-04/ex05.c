#include <stdio.h>
#include <locale.h>
#include "igualdade.h"

int returnNum();

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c;
	a = returnNum();
	b = returnNum();
	c = returnNum();
	
	int bigs = maior(a, b);
	bigs = maior(bigs, c);
	
	printf("Maior: %d", bigs);
}

int returnNum(){
	printf("Digite um número: ");
	int x; scanf("%d", &x);
	return x;
}
