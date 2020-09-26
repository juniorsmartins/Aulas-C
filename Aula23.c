#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

pulaLinha () { printf("\n\n"); }

int main ()
{
  int m = 0;
  int count = 100;
  int x = 10;
  pulaLinha();
  // Operador Ternário
  (x > 9) ? printf("Maior!") : printf("Menor!");
  pulaLinha();

  m = &count;
  printf("Resposta: %i", m);
  pulaLinha();

  return 0;
};
