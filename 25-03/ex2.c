#include <stdio.h>

int main(void) {
	char tamanho; int sai = 0;
	int quantidadeP = 0, quantidadeM = 0, quantidadeG = 0;
	
	while(sai == 0) {
    	printf("Digite o tamanho recebido, F para encerrar: ");
    	tamanho = getchar(); getchar();
    
    	switch (tamanho) {
    		case 'P': quantidadeP++; break;
			case 'M': quantidadeM++; break;
	    	case 'G': quantidadeG++; break;
	    	case 'F': sai = 1; break;
    	}
	}

	printf("P: %d\nM: %d\nG: %d", quantidadeP, quantidadeM, quantidadeG);
	return 0;
}
