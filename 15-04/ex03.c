#include <stdio.h>
#include <locale.h>
#include "util.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o número do raio: ");
	double r; scanf("%lf", &r);
	
	printf("Diâmetro: %.2lf\n", diametro(r));
	printf("Circunferência: %.2lf\n", circunferencia(r));
	printf("Área: %.2lf", area(r));
	
	return 0;
}
