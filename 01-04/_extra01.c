#include <stdio.h>
#include <locale.h>

void asterisco_linha(int);

void main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Programa de Quadril�teros\n");
	
	int L, C;
	printf("Digite o n�mero de linhas: "); scanf("%d", &L);
	printf("Digite o n�mero de colunas: "); scanf("%d", &C);
	
	printf("\n"); for(int i = 0; i < L; i++){asterisco_linha(C);}
}

void asterisco_linha(int n){
	for(int i = 0; i < n; i++){printf("*");}
	printf("\n");
}
