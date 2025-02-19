#include <stdio.h>

int main(void) {
  float peso = 110, altura = 1.88;
  float imc = peso/(altura * altura);
  printf("O teu IMC é de %f", imc);
  return 0;
}
