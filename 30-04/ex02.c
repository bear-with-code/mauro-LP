#include <stdio.h>
#include <locale.h>

int mult_n(int num, int n[], int tam_n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x, s; int v[2] = {3, 5};
	printf("Digite um número: ");
	scanf("%d", &x);
	
	printf("Múltiplos: ");
	s = mult_n(x, v, 2);
	
	printf("\nSoma dos múltiplos = %d", s);
	return 0;
}

int mult_n(int num, int n[], int tam_n){
	int s = 0;
	for(int i = 1; i < num; i++){
		for(int j = 0; j < tam_n; j++){
			if(i % n[j] == 0){
				printf("%d ", i); 
				s += i;
			}
		}
	}
	
	return s;
}
