#include <stdio.h>

int main(){
	float N, S = 0; int i = 0, lim = 3;
	
	puts("Calculadora de Media");
	
	while(i < lim){
		printf("Digite a nota %d: ", i + 1);
		scanf("%f", &N); S += N; i++;
	}
	
	S /= i; printf("Media = %.2f", S);
}
