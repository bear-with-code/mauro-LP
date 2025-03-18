#include <stdio.h>

int main(){
	float N, S = 0; int i = 0;
	
	puts("Calculadora de Media");
	puts("[Pare o programa com -5]");
	puts("");
	

	
	while(N != -5){
		printf("Digite a nota %d: ", i + 1);
		scanf("%f", &N); 
		
		if(N != -5){S += N; i++;}
	}
	
	printf("Media = %.2f\n", S/i);
}
