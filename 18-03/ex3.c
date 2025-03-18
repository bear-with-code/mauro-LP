#include <stdio.h>

int main(){
	int i = 0; 
	int cond = 1; 
	int trig = 0;
	
	puts("Calculadora de Triangulo Retangulo");
	puts("[Pare o programa com -1]");
	puts("");
	
	int a, b, c; 
	while(cond == 1){
		printf("Digite o primeiro lado: "); scanf("%d", &a);
		printf("Digite o segundo lado: "); scanf("%d", &b);
		printf("Digite o terceiro lado: "); scanf("%d", &c);
		
		if(a <= -1){cond = 0;}
		if(b <= -1){cond = 0;}
		if(c <= -1){cond = 0;}
		
		if(cond == 1){
			trig = a * a == b * b + c * c; 
			if(trig == 0){trig = b * b == a * a + c * c;}
			if(trig == 0){trig = c * c == a * a + b * b;}
			
			puts(trig ? "Pode ser" : "Nao pode ser");
		}
	}
}
