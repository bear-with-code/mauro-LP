#include <stdio.h>
#include <locale.h>
#include "util.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o n�mero do raio: ");
	double r; scanf("%lf", &r);
	
	printf("Di�metro: %.2lf\n", diametro(r));
	printf("Circunfer�ncia: %.2lf\n", circunferencia(r));
	printf("�rea: %.2lf", area(r));
	
	return 0;
}
