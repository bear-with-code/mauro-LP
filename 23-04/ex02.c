#include <stdio.h>
#include <locale.h>
#define MEU_PI 3.14159

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Calculadora de �rea\n");
	
	double r;
	printf("Digite o raio do c�rulo: ");
	scanf("%lf", &r);
	
	printf("�rea = %.2lf u�", r * r * MEU_PI);
	return 0;
}
