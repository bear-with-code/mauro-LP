#include <stdio.h>
#include <locale.h>
#define MEU_PI 3.14159

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Calculadora de área\n");
	
	double r;
	printf("Digite o raio do círulo: ");
	scanf("%lf", &r);
	
	printf("Área = %.2lf u²", r * r * MEU_PI);
	return 0;
}
