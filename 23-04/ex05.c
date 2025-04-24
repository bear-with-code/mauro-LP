#include <stdio.h>
#include <locale.h>
#define tam 2

double media(double n[]);
void dobro(double n[]);
void maior(double n[]);
void mostrarVetor(double n[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double v[tam];
	
	for(int i = 0; i < tam; i++){
		printf("Digite um n�mero real: ");
		scanf("%lf", &v[i]);
	}
	
	puts("\nAntes da fun��o dobro:");
	mostrarVetor(v);
	printf("\nM�dia = %.2lf\n", media(v));
	
	dobro(v);
	
	puts("\nDepois da fun��o dobro:");
	mostrarVetor(v);
	printf("\nM�dia = %.2lf\n", media(v));
	
	puts("\n\nFun��o maior:");
	printf("Antes: "); mostrarVetor(v);
	
	maior(v);
	printf("\nDepois: "); mostrarVetor(v);
	
}

void mostrarVetor(double n[]){
	for(int i = 0; i < tam; i++){
		printf("%.2lf", n[i]);
		printf((i < tam - 1) ? " | " : "");
	}
}

void maior(double n[]){
	// Depois fa�o modular
	
	double aux;
	if(n[0] < n[1]){
		aux = n[1];
		n[1] = n[0];
		n[0] = aux;
	}
}

double media(double n[]){
	return (n[0] + n[1])/tam;
}

void dobro(double n[]){
	for(int i = 0; i < tam; i++){
		n[i] *= 2;
	}
}
