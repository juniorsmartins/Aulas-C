#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

int main () 
{
/* Modificadores de Variáveis */

  int valor1 = 2;
  printf("%i int \n", sizeof(valor1));

  short int valor2 = 2;
  printf("%i short int \n", sizeof(valor2));

  unsigned int valor3 = 2;
  printf("%i unsigned int \n", sizeof(valor3));

  unsigned short int valor4 = 2;
  printf("%i unsigned short int \n", sizeof(valor4));

  double valor5 = 2;
  printf("%i double \n", sizeof(valor5));

  long double valor6 = 2;
  printf("%i long double \n", sizeof(valor6));

  return 0;
};

