#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings
#define TAM 5
int main(void)
{
  system("cls");
  char arquivo[TAM] = {};
  int valores[TAM] = {}, cont;

  printf("\n");
  printf("Digite uma frase: ");
  scanf("%c", &arquivo[0]);
  printf("\n");

  printf("Digite alguns números: ");
  scanf("%d", &valores[0]);
  printf("\n\n");

  for (cont = 0; cont < TAM; cont++)
  {
    printf("Arquivo1: %c", arquivo[cont]);
    printf("\n");
    printf("Arquivo2: %i", valores[cont]);
    printf("\n");
  }

  return 0;
}
