#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char senha[50];
	printf("Digite a senha: ");
	scanf("%49s", senha);
	
	printf((strlen(senha) < 8) ? "Erro na senha" : "Senha conforme");
	return 0;
}
