#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings

int main()
{
  unsigned int valor1, soma, valor2 = 2;
  char teste1 = 'T';
  char teste2[7] = "String";
  printf("Somar Valores\n\n");

  printf("Digite o primeiro valor: ");
  scanf("%u", &valor1);
  printf("%u", valor1);

  puts("\n");
  putchar(teste1);
  puts("\n");
  puts(teste2);
  puts("\n");

  soma = valor1 + valor2;

  printf("A soma é: %u", soma);

  return 0;
};

