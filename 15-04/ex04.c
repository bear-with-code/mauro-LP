#include <stdio.h>
#include <locale.h>
#include "util.h"

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, y;
	printf("Digite um n�mero: "); scanf("%d", &x);
	printf("Digite um n�mero: "); scanf("%d", &y);
	
	compara(x, y);
}
