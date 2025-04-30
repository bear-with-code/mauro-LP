#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char senha[6];
	puts("Olá, prezado usuário(a).");
	
	for(int i = 0; i < 3; i++){
		printf("Por favor, digite sua senha: ");
		scanf("%5s", senha); getchar();
		
		if(!strcmp(senha, "azimo")){
			printf("\nSeja bem vindo(a)!"); 
			break; 
		}
		else{
			if(i < 2){
				printf("\nSenha errada. Tentativas restantes: %d\n", 2 - i);
			}
			else{
				printf("\nTente novamente mais tarde.");
			}
		}
	}
	
	return 0;
}