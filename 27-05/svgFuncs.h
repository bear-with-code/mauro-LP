void x_and_y(int *vt){
	int x, y; scanf("%d %d", &x, &y);
	*vt = x; vt++; *vt = y;
}

int svg_rect(FILE *arq){
	int xy[2] = {0, 0}, wh[2] = {0, 0};
	
	int retorno;
	printf("Digite a posição x e y do retângulo: "); x_and_y(xy);
	printf("Digite a largura e altura do retângulo: "); x_and_y(wh);
	retorno = fprintf(arq, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />", xy[0], xy[1], wh[0], wh[1]);
	return (retorno < 0) ? 0 : 1;
}

int svg_circ(FILE *arq){
	int xy[2] = {0, 0};
	
	int retorno, raio;
	printf("Digite a posição x e y do círculo: "); x_and_y(xy);
	printf("Digite o raio do círculo: "); scanf("%d", &raio);
	retorno = fprintf(arq, "<circle cx=\"%d\" cy=\"%d\" r=\"%d\" />", xy[0], xy[1], raio);
	return (retorno < 0) ? 0 : 1;
}

int svg_line(FILE *arq){
	int ixy[2] = {0, 0}, fxy[2] = {0, 0};
	
	int retorno, raio;
	printf("Digite a posição x1 e y1 da linha: "); x_and_y(ixy);
	printf("Digite a posição x2 e y2 do linha: "); x_and_y(fxy);
	retorno = fprintf(arq, "<line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"black\" />", ixy[0], ixy[1], fxy[0], fxy[1]);
	return (retorno < 0) ? 0 : 1;
}

int svg_text(FILE *arq){
	int xy[2] = {0, 0};
	
	char oi[51]; int retorno;
	printf("Digite a posição x e y do texto: "); x_and_y(xy);
	printf("Digite uma palavra pro texto: "); scanf("%50s", oi);
	retorno = fprintf(arq, "<text x=\"%d\" y=\"%d\"> %s </text>", xy[0], xy[1], oi);
	return (retorno < 0) ? 0 : 1;
}

int svg_begin(FILE *arq){
	int retorno = fprintf(arq, "<svg version=\"1.1\" "); if(retorno < 0){return 0;}
	retorno = fprintf(arq, "width=\"300\" height=\"200\" "); if(retorno < 0){return 0;}
	retorno = fprintf(arq, "xmlns=\"http://www.w3.org/2000/svg\">"); if(retorno < 0){return 0;}
	return 1;
}

int svg_end(FILE * arquivo) {
	int retorno = fprintf(arquivo, "</svg>"); return (retorno < 0) ? 0 : 1;
} 
