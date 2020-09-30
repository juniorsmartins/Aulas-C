#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings

int main()
{
  system("cls");
  char alfabeto;
  char palavra[10];
  char frase[40];

  puts("Digite uma letra: ");
  alfabeto = getchar();

  puts("Digite uma palavra: ");
  scanf("%s", &palavra);

  puts("Digite uma frase: ");
  scanf("%s", frase);

  puts("\n");
  putchar(alfabeto);
  puts("\n");
  puts(palavra);
  puts("\n");
  printf("%s", frase);

  return 0;
};

