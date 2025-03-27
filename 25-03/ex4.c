#include <stdio.h>

void main(){
	puts("Lanchonete Online\n");
	
	int qtd_b = 0, qtd_h = 0, qtd_s = 0, qtd_c = 0;
	puts("[B]atata\tR$ 10,00");
	puts("[H]amburguer\tR$ 15,00");
	puts("[S]uco\t\tR$  9,00");
	puts("[C]ombo\t\tR$ 30,00\n");
	
	int pedindo = 1; char pedido;
	puts("Digite [X] para pedir a conta.");
	while(1 == 1){
		printf("O que gostaria de pedir? ");
		scanf("%c", &pedido); getchar();
		
		if(pedido == 'X'){break;}
		else if(pedido == 'x'){break;}
		
		switch(pedido){
			case 'b':
			case 'B': 
				qtd_b++; puts("Anotado!\n"); break;
			case 'h':
			case 'H': 
				qtd_h++; puts("Anotado!\n"); break;
			case 's':
			case 'S': 
				qtd_s++; puts("Anotado!\n"); break;
			case 'c':
			case 'C': 
				qtd_c++; puts("Anotado!\n"); break;
			default:
				puts("Produto desconhecido, tente novamente."); break;
		}
	}
	
	int vt = qtd_b*10 + qtd_h*15 + qtd_s*9 + qtd_c*30;
	printf("\n[Recibo]\n");
	printf("Batata\t\tR$ %2d,00\n", qtd_b*10);
	printf("Hamburguer\tR$ %2d,00\n", qtd_h*15);
	printf("Suco\t\tR$ %2d,00\n", qtd_s*9);
	printf("Combo\t\tR$ %2d,00\n", qtd_c*30);
	puts("------------------------");
	printf("Total:\t\t%d itens\n\n", qtd_b + qtd_h + qtd_s + qtd_c);
	printf("Valor Total:\tR$ %3d,00", vt);
}
