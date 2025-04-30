#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[11] = "João Pedro";
	printf("Nome: %s\n\n*", nome);
	for(int i = 0; i < 10; i++){
		printf(" %c *", nome[i]);
	}
	
	return 0;
}
