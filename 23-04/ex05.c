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
		printf("Digite um número real: ");
		scanf("%lf", &v[i]);
	}
	
	puts("\nAntes da função dobro:");
	mostrarVetor(v);
	printf("\nMédia = %.2lf\n", media(v));
	
	dobro(v);
	
	puts("\nDepois da função dobro:");
	mostrarVetor(v);
	printf("\nMédia = %.2lf\n", media(v));
	
	puts("\n\nFunção maior:");
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
	// Depois faço modular
	
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
