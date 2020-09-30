#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings

int pula_Linha()
{
  puts("\n");
};

int main()
{
  system("cls");
  register int linha, coluna;
  int i_Matriz[3][3] = 
  {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90}
  };

  for (linha = 0; linha < 3; linha++)
  {
    for (coluna = 0; coluna < 3; coluna++)
    {
      printf("Linha %i e Coluna %d = %i \n", linha, coluna, i_Matriz[linha][coluna]);
    }
  }
  pula_Linha();
  system("pause");
  return 0;
};