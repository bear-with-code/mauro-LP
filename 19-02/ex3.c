#include <stdio.h>

int main(void) {
  float peso, altura, imc;
  
  printf("Digite o seu peso: "); 
  scanf("%f", &peso);
  
  printf("Digite a sua altura: "); 
  scanf("%f", &altura);
  
  imc = peso/altura/altura;
  printf("Seu IMC: %.2f", imc);
  return 0;
}
