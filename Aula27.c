#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

void pulaLinha ()
{
  printf("\n");
  return 0;
};

int main ()
{

  int valor1, valor2, valor3;
  valor1 = valor2 = valor3 = 2;
  printf("Os valores: %i, %i e %d", valor1, valor2, valor3);
  pulaLinha();
  printf("Variavel de %d bytes", sizeof valor1);

  return 0;
}



