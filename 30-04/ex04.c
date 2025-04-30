#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[6], letra;
	char * pos;
	puts("Busca de letra");
	
	printf("Por favor, digite uma palavra: ");
	scanf("%5s", palavra); getchar();
	
	for(int i = 0; i < 3; i++){
		printf("\nChute uma letra: ");
		scanf("%c", &letra); getchar();
		
		pos = strchr(palavra, letra);
		
		if(pos != NULL){printf("\nEncontrada!"); break;}
		else{
			if(i < 2){
				printf("\NNão encontrada. Tentativas restantes: %d\n", 2 - i);
			}
			else{
				printf("\nTente novamente mais tarde.");
			}
		}
	}
	
	return 0;
}
