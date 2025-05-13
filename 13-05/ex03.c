#include <stdio.h>
#include <locale.h>
#include <string.h>

void anagrama(char n[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	puts("Leitor entre anagramas\n");
	
	char p1[21], p2[21];
	printf("Digite uma palavra: ");
	scanf("%20s", p1); getchar();
	
	printf("Digite uma outra palavra: ");
	scanf("%20s", p2); getchar();
	
	printf("\n");
	if(strlen(p1) != strlen(p2)){
		printf("Tamanhos differentes!");
	}
	else{
		anagrama(p1); anagrama(p2);
		printf((!strcmp(p1, p2)) ? "São anagramas!" : "Não são anagramas.");
	}
	
	return 0;
}

void anagrama(char n[]){
	int T = strlen(n); char aux;
	char old[T + 1]; 

	for(int i = 0; i < T - 1; i++){
		strcpy(old, n);
		for(int j = 0; j < T - 1 - i; j++){
			if(n[j] > n[j + 1]){
				aux = n[j];
				n[j] = n[j + 1];
				n[j + 1] = aux;
			}
		}
		
		if(!strcmp(old, n)){break;}
	}
}