#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

int main ()
{
  int valor = 1555;
  int *endereco_valor;
  int valor_no_endereco;

  endereco_valor = &valor;
  printf("\nO endereço é &: %i", endereco_valor);
  valor_no_endereco = *endereco_valor;
  printf("\nO valor no endereço é *: %i", valor_no_endereco);

  return 0;
};