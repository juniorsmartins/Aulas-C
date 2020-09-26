#include <stdio.h>
#include <stdlib.h>
// Aula - Aprender sobre variável Global e Local + Entrada e saída

int main()
{
  int num1;
  int num2;
  num1 = 2;
  printf("Digite um valor numérico inteiro: ");
  scanf("%i", &num2);
  printf("A soma de %i com %i é: %d", num1, num2, num1 + num2);

  return 0;
}