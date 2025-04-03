#include <stdio.h>
#include <locale.h>

void testa_par(int);

void main(){
	setlocale(LC_ALL, "Portuguese");
	testa_par(5); testa_par(2);
	testa_par(3); testa_par(9);
	testa_par(16); testa_par(24);
}

void testa_par(int n){
	printf("%d é par? %d\n", n, n % 2 == 0);
}
