#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings

int main()
{
  int opcao1 = 0;
  int opcao2 = 0;
  system("cls");
  printf("\n");
  printf("Linguagem de Programação C");
  printf("\n");
  printf("Teste de switch e switch aninhado");
  printf("\n\n");

  printf("Escolha uma opção de 1 a 3: ");
  scanf("%i", &opcao1);
  printf("\n");
  printf("Escolha opção de 1 a 2: ");
  scanf("%d", &opcao2);
  switch (opcao1)
  {
    case 1:
      printf("Opcao 1");
      switch (opcao2)
      {
        case 1:
          printf("\n");
          printf("Opcao 1.1");
          break;
        case 2:
          printf("\n");
          printf("Opcao 1.2");
          break;
      }
      break;
    case 2: 
      printf("Opcao 2");
      break;
    case 3:
      printf("Opcao 3");
      break;
    default:
      printf("Opção Inválida!");
  }
  printf("\n");
}