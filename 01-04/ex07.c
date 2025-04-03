#include <stdio.h>

void asterisco_linha(int);

void main(){
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	printf("\n");
	asterisco_linha(a);
	asterisco_linha(b);
	asterisco_linha(c);
	asterisco_linha(d);
}

void asterisco_linha(int n){
	for(int i = 0; i < n; i++){printf("*");}
	printf("\n");
}
