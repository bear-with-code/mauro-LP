#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double n[3], total = 0;
	puts("Somat�ria de n�meros\n");
	
	for(int i = 0; i < 3; i++){
		printf("Digite um n�mero: ");
		scanf("%lf", &n[i]);
		total += n[i];
	}
	
	printf("\nTotal = %.2lf", total);
	return 0;
}
