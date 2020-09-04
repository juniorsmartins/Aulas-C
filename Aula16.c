#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

int main () 
{
  int valor1;
  int valor2;
  int total;

  printf("\t Digite o valor 1: ");
  scanf("%i", &valor1);

  printf("\t Digite o valor 2: ");
  scanf("%i", &valor2);

  total = valor1 + valor2;
  printf("\t \n A soma do valor1 + valor2 é: %d ", total);

  system("pause");

  return 0;
}