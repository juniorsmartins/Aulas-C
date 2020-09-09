#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

int main () {

  int i = 40;
  int condicao = (i>20) && (i<100);
  printf('%i', condicao);
  printf('%d', !condicao);

  return 0;
}

