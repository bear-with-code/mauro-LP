#include <stdio.h>
#include <string.h>
#include <locale.h>

int diferente(char n[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Verificador de Palíndromo\n");
	
	char palavra[11];
	printf("Digite uma palavra: ");
	scanf("%s", palavra); getchar();
	
	printf("Resultado: ");
	printf(diferente(palavra) ? "NÃO é" : "é um palíndromo");
	printf("!\n");
	
	return 0;
}

int diferente(char n[]){
	int T = strlen(n);
	
	for(int i = 0; i < T; i++){
		if(n[i] != n[T - i - 1]){
			return 1;
		}
	}
	
	return 0;
}
