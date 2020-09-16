#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

int pulaLinha()
{
  printf("\n");
}

int main ()
{
  system("cls");
  char valor;
  pulaLinha();
  printf("Digite o numero 1: ");
  scanf("%c", &valor);
  if (valor == '1')
  {
    pulaLinha();
    printf("Digitou corretamente!");
    pulaLinha();
  } else 
    {
      pulaLinha();
      printf("Digitou incorretamente: %c", valor);
      pulaLinha();
    }

  system("pause");
  return 0;
}