#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
/*
  Linguagem de Programação C
  Canal: eXcript
  Aula: Do-While
*/
void pula_Linha() 
{
  printf("\n");
}

int main ()
{
  int contador = 0;
  int c;
  do
  {
    system("cls");
    pula_Linha();
    printf("Digite zero para sair do looping: ");
    printf("%i", contador);
    contador +=1;
    pula_Linha();
    scanf("%i", &c);
  } while (c != 0);
  return 0;
}

