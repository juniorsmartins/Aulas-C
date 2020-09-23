#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings

int main()
{
  printf("\n");
  printf("LP C");
  printf("\n");  

  int x;
  for (x = 1; x < 6; x++)
  {
    printf("\n");
    printf("%i", x);
  }

  return 0;
}
