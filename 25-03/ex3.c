#include <stdio.h>

void main(){
	char rotina; int sai = 0, contagem = 1;
	puts("Emulador de Lavagem\n");
	
	while(sai == 0){
	    printf("Lavagem %d - Digite o nivel [1 - 3, 0 = Cancela]: ", contagem);
	    rotina = getchar(); getchar();
	    
	    switch(rotina){
	    	case '3': puts("Lavar"); 
			case '2': puts("Enxaguar");
		    case '1': puts("Secar\n"); break;
		    case '0': sai = 1; break;
		}
		
		contagem++;
	}

	printf("Volte sempre.");
}
