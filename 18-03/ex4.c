#include <stdio.h>

int main(){
	float R, pi = 3.14159265359;
	
	puts("Calculadora de Circulo");
	puts("");
	
	printf("Digite o raio: "); scanf("%f", &R);
	
	printf("Diametro = %.2f\n", R * 2);
	printf("Circunferencia = %.2f\n", R * 2 * pi);
	printf("Area = %.2f", R * R * pi);
}
