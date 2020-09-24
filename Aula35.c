#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings


int main()
{

  char s[80], *str;
  int space;

  printf("Digite uma string: ");
  gets(s);
  str = s;

  for (space = 0; *str; str++)
  {
    printf("Teste: %c \n", *str);
    if (*str != ' ') continue;
      space++;
  }
  printf("%d espaços \n", space);


}



