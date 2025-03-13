#include <stdio.h>

int main(){
	int I;
	
	printf("Digite a idade do paciente: ");
	scanf("%d", &I);
	
	puts(I >= 60 ? "Pode ser atendido" : "Nao pode ser atendido");
}
