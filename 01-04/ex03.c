#include <stdio.h>

void main(){
	for(int i = 1; i <= 20; i++){
		if(i % 3 == 0) continue;
		
		printf("%d ", i);
	}	
}

