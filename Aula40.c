#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings

int main()
{
  const int alunos = 3;
  const int notas = 3;
  float tabela[alunos][notas];
  float media = 0;
  float mediaAlunos[alunos];
  register int aluno;
  register int nota;
  system("cls");
  for (aluno = 0; aluno < alunos; aluno++) // Entrada das notas de todos os alunos
  {
    puts("Quais as três notas do aluno: ");
    for (nota = 0; nota < notas; nota++)
    {
      scanf("%f", &tabela[aluno][nota]);
      media += tabela[aluno][nota];
    };
    mediaAlunos[aluno] = (media / alunos);
    media = 0;
  };

  for (aluno = 0; aluno < alunos; aluno++) // Saída das médias de todos os alunos
  {
    printf("O Aluno %i teve a média: %f \n", aluno + 1, mediaAlunos[aluno]);
  };
  system("pause");
  return 0;
};


