#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[51], sobrenome[51], completo[101] = "";
	printf("Digite seu nome: "); scanf("%50s", nome); getchar();
	printf("Digite seu sobrenome: "); scanf("%50s", sobrenome); getchar();
	
	strcat(nome, " ");
	strcat(nome, sobrenome);
	strcat(completo, nome);
	
	printf("Nome completo: %s\n", completo);
	return 0;
}
