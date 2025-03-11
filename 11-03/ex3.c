#include <stdio.h>

int main(){
	float p, h, imc;
	
	printf("Informe o peso em kg: "); scanf("%f", &p);
	printf("Informe a altura em m: "); scanf("%f", &h);
	
	imc = p/(h * h); printf("IMC = %.2f\nTipo: ", imc);
	if(imc >= 40){puts("Obesidade Classe III"); return 0;}
	if(imc >= 35){puts("Obesidade Classe II"); return 0;}
	if(imc >= 30){puts("Obesidade Classe I"); return 0;}
	if(imc >= 25){puts("Sobrepeso"); return 0;}
	if(imc >= 18.5){puts("Intervalo Normal"); return 0;}
	else puts("Baixo Peso");
	
	return 0;
}
