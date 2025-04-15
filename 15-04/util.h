#include <stdio.h>
#include <math.h>

double diametro(double r){
	return 2 * r;
}

double circunferencia(double r){
	return diametro(r) * M_PI;
}

double area(double r){
	return r * r * M_PI;
}

void compara(int x, int y){
	printf("O maior: %d\n", (x > y) ? x : y);
	printf("O menor: %d\n", (x > y) ? y : x);
	printf("Iguais? ");
	
	if(x == y){ printf("Sim\n");}
	else{printf("Não\n");}
}
