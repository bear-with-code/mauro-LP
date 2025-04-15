#include <stdio.h>
#include <locale.h>

int returnNum();
int somaNum(int x, int y);
void returnSoma(int s);

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	returnSoma(somaNum(returnNum(), returnNum()));
}

int returnNum(){
	printf("Digite um número: ");
	int x; scanf("%d", &x);
	return x;
}

int somaNum(int x, int y){
	return x + y;
}

void returnSoma(int s){
	printf("A soma é %d\n", s);
}
