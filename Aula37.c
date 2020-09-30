#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings

int main()
{
  char str[] = "String";
  char c = 'A';
  char sMensagem[100];
  printf("Testes!\n");

  puts("Entrada e Saida");
  putchar('E');
  putchar('S');
  puts("\n");
  puts(str);
  putchar(c);

  sprintf(sMensagem, "\nTeste da funcao SprintF de C - %c", c);
  puts(sMensagem);

  return 0;
};

