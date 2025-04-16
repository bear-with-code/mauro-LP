#include <stdio.h>
#include <locale.h>
#include "igualdade.h"

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y;
	printf("Digite um número: "); scanf("%d", &x);
	printf("Digite um número: "); scanf("%d", &y);
	
	int r = igual(x, y);
	printf("Iguais: "); printf((r) ? "sim" : "não");
	
	if(!r){
		printf("\nMaior: %d", maior(x, y));
		printf("\nMenor: %d", menor(x, y));
	}
}
