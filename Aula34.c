#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings

int main()
{
  int cont1, cont2, ab, cd, tempo;
  printf("\n");
  printf("LP C");
  
  printf("\n\n");
  printf("For Padrão Crescente");
  for (cont1 = 1; cont1 < 6; cont1++)
  {
    printf("\n");
    printf("%i", cont1);
  }

  printf("\n\n");
  printf("For Padrão Decrescente");
  for (cont2 = 5; cont2 >= 1; cont2--)
  {
    printf("\n");
    printf("%d", cont2);
  }

  printf("\n\n");
  printf("Variação For\n");
  for (ab = 0, cd = 3; ab + cd <= 10; ab++, cd++)
  {
    printf("ab = %i e cd = %d e a soma é: %i \n", ab, cd, ab+cd);
  }

  printf("\n\n");
  printf("Laço For sem corpo\n");
  for (tempo = 0; tempo <= 500000; tempo++);
  printf("Tempo Encerrado!");


  return 0;
}
