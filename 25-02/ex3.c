#include <stdio.h>

int main(){
	float nota;
	
	printf("Digite a nota do aluno [0-10]: ");
	scanf("%f", &nota);
	
	if(nota >= 9){printf("Conceito: A"); return 0;}
	if(nota >= 8){printf("Conceito: B"); return 0;}
	if(nota >= 7){printf("Conceito: C"); return 0;}
	if(nota >= 6){printf("Conceito: D"); return 0;}
	if(nota >= 0){printf("Conceito: F"); return 0;}
	
	/* 
		- Forma Alternativa
		{
			if(nota < 6){printf("Conceito: F");}
			if(nota < 7){printf("Conceito: D");}
			if(nota < 8){printf("Conceito: C");}
			if(nota < 9){printf("Conceito: B");}
			if(nota <= 10){printf("Conceito: A");}
			
			return 0;
		}
	*/
}
