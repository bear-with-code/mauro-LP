#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "paginas.h"

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Content-type: text/html\n\n");
	
	printf("<!DOCTYPE html>");
	inicio(); aba("Segunda página");
	meio(); titulo("Usando argumentos");
	fim();
	return 0;
}


