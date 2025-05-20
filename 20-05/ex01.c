#include <stdio.h>
#include <locale.h>
#include <math.h>

double calcular_tempo_queda(float altura);
double calcular_distancia_liberacao(float velocidade, float altura);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float h, v;
	printf("Digite a altura do avião em metros: "); scanf("%f", &h);
	printf("Digite a velocidade do avião em m/s: "); scanf("%f", &v);
	
	printf("\n");
	printf("Tempo de queda = %.3lf segundos\n", calcular_tempo_queda(h));
	printf("Distância horizontal = %.3lf metros", calcular_distancia_liberacao(v, h));
	return 0;
}

double calcular_tempo_queda(float altura){
	return sqrt(2 * altura / 9.81);
}

double calcular_distancia_liberacao(float velocidade, float altura){
	return velocidade * calcular_tempo_queda(altura);
}
