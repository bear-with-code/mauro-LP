#include <stdio.h>

void main(){
	puts("Jogo de adivinhar\n");
	
	int n = -1, tent = 0;
	do{
		printf("TENTATIVA %d DE 3\n", tent + 1);
		printf("Em qual numero estou pensando? "); scanf("%d", &n);
		
		if(n == 7){
			printf("\nGanhaste!"); tent = 4;
		}
		else{
			printf("Numero errado.\n\n"); tent++;
			
			if(tent >= 3){
				printf("Fim de jogo! O segredo era 7.");
			}
		}
	}
	while(tent < 3);
}
