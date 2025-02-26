#include <stdio.h>

int main(){
	int num;
	
	printf("Teste de Paridade: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){printf("Par"); return 0;}
	printf("Impar");
}
