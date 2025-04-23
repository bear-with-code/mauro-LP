#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double notas[4], total = 0;
	puts("Somatória de notas\n");
	
	for(int i = 0; i < 4; i++){
		printf("Digite uma nota: ");
		scanf("%lf", &notas[i]);
		total += notas[i];
	}
	
	printf("\nTotal = %.2lf", total);
	return 0;
}
