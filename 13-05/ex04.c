#include <stdio.h>
#include <string.h>
#include <locale.h>

void trig(int n, char t[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x; char d[2];
	printf("Digite um número: ");
	scanf("%d", &x); getchar(); trig(x, "A");
	
	while(1){
		scanf("%s", d); getchar();
		
		if(!strcmp(d, "F")){break;}
		else if(!strcmp(d, "A") || !strcmp(d, "D")){trig(x, d);}
		else{
			printf("Comando não reconhecido!\n");
		}
	}
	return 0;
}

void trig(int n, char t[]){
	for(int i = 0; i < n; i++){
		if(!strcmp(t, "D")){for(int j = n-1; j > i; j--){printf(" ");}}
		
		for(int j = 0; j < i+1; j++){printf("*");}
		if(i < n-1){printf("\n");}
	}
	printf("\n");
}
