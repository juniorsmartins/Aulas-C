#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings

void pula_Linha()
{
  printf("\n");
};

int main()
{
  char nome[20];
  char c;
  puts("Teste de comandos de entrada!\n");
  printf("Nome: ");
  gets(nome);
  puts("Resultado: ");
  puts(nome);
  pula_Linha();
  puts("Digite um caracter: ");
  c = getchar();
  putchar(c);


  return 0;
};