#include <stdio.h>
#include <locale.h>
#include "igualdade.h"

int returnNum();

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num[3];
	for(int i = 0; i < 3; i++){
		num[i] = returnNum();
	}
	
	int bigs = num[0];
	for(int i = 1; i < 3; i++){
		bigs = maior(bigs, num[i]);
	}
	
	printf("Maior: %d", bigs);
}

int returnNum(){
	printf("Digite um número: ");
	int x; scanf("%d", &x);
	return x;
}
