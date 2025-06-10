#include <stdio.h>

void inicio(){printf("<html lang=\"pt-BR\">"); printf("<head><meta charset=\"UTF-8\">");}
void meio(){printf("</head><body>");}
void fim(){printf("</body></html>");}

void aba(char nome[]){
	printf("<title>");
	printf("%s", nome);
	printf("</title>");
}

void titulo(char nome[]){
	printf("<h1>");
	printf("%s", nome);
	printf("</h1>");
}
