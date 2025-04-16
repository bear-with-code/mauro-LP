#include <stdio.h>
#include <locale.h>
#include "igualdade.h"

int returnNum();

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num[3];
}

int returnNum(){
	printf("Digite um número: ");
	int x; scanf("%d", &x);
	return x;
}
