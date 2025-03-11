#include <stdio.h>

void main(){
	float N;
	
	printf("Digite a nota do aluno [0-10]: ");
	scanf("%f", &N);
	
	if(N > 10){puts("Fora do intervalo");}
	else{
		if(N < 0){puts("Fora do intervalo");}
		else{
			printf("Conceito ");
			
			if(N >= 9) puts("A");
			else{
				if(N >= 8) puts("B");
				else{
					if(N >= 7) puts("C");
					else{
						if(N >= 6) puts("D");
						else puts("F");
					}	
				}
			}
		}
	}
}
