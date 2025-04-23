#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x[5];
	x[0] = 1; x[1] = 2; x[2] = 40;
	x[3] = -8; x[4] = 0;
	
	for(int i = 0; i < 5; i++){
		printf("x[%d] = %d", i, x[i]);
		printf((i < 4) ? "\n" : "");
	}
	
	
	return 0;
}
