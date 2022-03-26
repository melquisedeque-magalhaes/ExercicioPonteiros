#include <stdio.h>

int main(void) {
  float number1, number2;
  float *pointer1, *pointer2;

  pointer1 = &number1;
  pointer2 = &number2;
  
  printf("Digite o primeiro valor: ");
  scanf("%f", &number1);

  printf("Digite o segundo valor: ");
  scanf("%f", &number2);

  printf("A soma entre os dois numeros é %.2f", *pointer1 + *pointer2);
  return 0;
}