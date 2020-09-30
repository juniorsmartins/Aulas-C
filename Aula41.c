#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings
int main()
{
  system("cls");
  char alfabeto;
  char palavra[20];
  char frase[40];

  puts("Digite uma letra: ");
  alfabeto = getchar();

  puts("Digite uma palavra: ");
  gets(palavra);

  puts("Digite uma frase: ");
  gets(frase);

  puts("\n");
  putchar(alfabeto);
  puts("\n");
  puts(palavra);
  puts("\n");
  printf("%s \n", frase);
  printf("Comprimentos: %d - %d - %d", strlen(alfabeto), strlen(palavra), strlen(frase));
  return 0;
};

