#include <stdio.h>
#include <locale.h>

int diferente(char s1[], char s2[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char senha[6];
	puts("Olá, prezado usuário(a).");
	
	for(int i = 0; i < 3; i++){
		printf("Por favor, digite sua senha: ");
		scanf("%5s", senha); getchar();
		
		if(!diferente(senha, "azimo\0")){
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

int diferente(char s1[], char s2[]) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0'){
        if (s1[i] != s2[i])
            return (s1[i] > s2[i]) ? 1 : -1;
        i++;
    }

    if (s1[i] == '\0' && s2[i] == '\0') {
        return 0;
    }
    
    return (s1[i] == '\0') ? -1 : 1;
}
