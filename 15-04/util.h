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

