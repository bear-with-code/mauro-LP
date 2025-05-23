#include <stdio.h>
#include <locale.h>
#include <string.h>

int palindromo(char *letra);
void inverter_string(char *letra);

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Manipulando Strings\n");
	
	char word[31];
	printf("Digite uma palavra de até 30 letras: ");
	scanf("%30s", word); getchar();
	
	printf("%s é um palíndromo? %s\n", word, (palindromo(word)) ? "Sim" : "Não");
	inverter_string(word); printf("String invertida: %s\n", word); return 0;
}

void inverter_string(char *letra){
	char *inicio = letra;
	char *fim = letra;
	char aux;
	
	fim += strlen(letra) - 1;
	while(inicio < fim){
		aux = *inicio;
		*inicio = *fim;
		*fim = aux;
		
		inicio++; fim--;
	}
}

int palindromo(char *letra){
	char *inicio = letra;
	char *fim = letra;
	
	fim += strlen(letra) - 1;
	while(inicio < fim){
		if(*inicio != *fim){return 0;}
		inicio++; fim--;
	}
	
	return 1;
}
