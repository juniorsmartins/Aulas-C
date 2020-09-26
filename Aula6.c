#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int num1;
  float num2;
  printf("Por favor, digite um número: \n");
  scanf("%i", &num1);
  printf("Por favor, digite um segundo número: \n");
  scanf("%f", &num2);
  printf("%i - %f", num1, num2);

  return 0;
}

