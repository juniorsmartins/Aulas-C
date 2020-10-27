// Instituição: Faculdade de Tecnologia Senai Mato Grosso - Fatec Senai
// Curso Superior: Análise e Desenvolvimento de Sistemas
// Disciplina: Laboratório Algoritmos e Programação II
// Atividade: prova do primeiro bimestre
// Aluno/autor: Junior Martins - Turma: ADS-2020/1
#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros.
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings



// ----- Início Menu Principal ----- //
int menu_Principal()
{
  system("cls");
  printf("***********************\n");
  printf("***********************\n");
  printf("*******  MENU  ********\n");
  printf("***********************\n");
  printf("****  Exercicio 1  ****\n");
  printf("****  Exercicio 2  ****\n");
  printf("****  Exercicio 3  ****\n");
  printf("****  Exercicio 4  ****\n");
  printf("****  Exercicio 5  ****\n");
  printf("****  Exercicio 6  ****\n");
  printf("****  Exercicio 8  ****\n");
  printf("****  Exercicio 9  ****\n");
  printf("****  Exercicio 10  ***\n");
  printf("****  Exercicio 11  ***\n");
  printf("****  Exercicio 12  ***\n");
  printf("****  Exercicio 13  ***\n");
  printf("****  Exercicio 14  ***\n");
  printf("****  Exercicio 15  ***\n");
  printf("******  Sair 0  *******\n");
  printf("***********************\n");
  printf("* Qual opcao (0 a 15)?");
  int opcao = 0;
  scanf("%d", &opcao);
  return(opcao);
}
// ----- Fim Menu Principal ----- //



// ----- Início da Seção de Exercícios ----- //

// ----- Fim da Seção de Exercícios ----- //



// ----- Início da Função Principal ----- //
int main () 
{
  int opcao_Principal;
  do 
  {
    opcao_Principal = menu_Principal();
    switch (opcao_Principal)
    {
    case 1:
      /* Exercício 1: */
      break;
    case 2:
      /* Exercício 2: */
      break;
    case 3:
      /* Exercício 3: */
      break;
    case 4:
      /* Exercício 4: */
      break;
    case 5:
      /* Exercício 5: */
      break;
    case 6:
      /* Exercício 6: */
      break;
    case 7:
      /* Exercício 7: */
      break;
    case 8:
      /* Exercício 8: */
      break;
    case 9:
      /* Exercício 9: */
      break;
    case 10:
      /* Exercício 10: */
      break;
    case 11:
      /* Exercício 11: */
      break;
    case 12:
      /* Exercício 12: */
      break;
    case 13:
      /* Exercício 13: */
      break;
    case 14:
      /* Exercício 14: */
      break;
    case 15:
      /* Exercício 15: */
      break;
    default:
      /* Opção Inválida! */
      system("cls");
      printf("\n \t Tente novamente! \n \n");
      system("pause");
      break;
    }
  } while (opcao_Principal != 0);
  return 0;
};
// ----- Fim da Função Principal ----- //

