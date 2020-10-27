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
  printf("\t ***********************\n");
  printf("\t ***********************\n");
  printf("\t *******  MENU  ********\n");
  printf("\t ***********************\n");
  printf("\t ****  Exercicio 1  ****\n");
  printf("\t ****  Exercicio 2  ****\n");
  printf("\t ****  Exercicio 3  ****\n");
  printf("\t ****  Exercicio 4  ****\n");
  printf("\t ****  Exercicio 5  ****\n");
  printf("\t ****  Exercicio 6  ****\n");
  printf("\t ****  Exercicio 8  ****\n");
  printf("\t ****  Exercicio 9  ****\n");
  printf("\t ****  Exercicio 10  ***\n");
  printf("\t ****  Exercicio 11  ***\n");
  printf("\t ****  Exercicio 12  ***\n");
  printf("\t ****  Exercicio 13  ***\n");
  printf("\t ****  Exercicio 14  ***\n");
  printf("\t ****  Exercicio 15  ***\n");
  printf("\t ******  Sair 0  *******\n");
  printf("\t ***********************\n");
  printf("\t * Qual opcao (0 a 15)?");
  int opcao = 0;
  scanf("%d", &opcao);
  return(opcao);
}
// ----- Fim Menu Principal ----- //



// ----- Início da Seção de Funções Auxiliáres ----- //
  void pula_Linha() 
  {
    printf("\n \n");
  }
// ----- Início da Seção de Funções Auxiliáres ----- //



// ----- Início da Seção de Funções de Exercícios ----- //
  // -- Início do Exercício 1 -- //
  void exercicio_1()
  {
    int caixa_1[10][10] = {0};
    register unsigned int linha, coluna;
    system("cls");
    printf("\n \n");
    printf("\n \t **************************************************");
    printf("\n \t ******************* Exercicio 1 ******************");
    printf("\n \t **************************************************");
    printf("\n \t *** Imprimir diagonal da matriz[10][10] com 1  ***");
    printf("\n \t **************************************************");
    printf("\n \n");
    printf("\t ANTES: \n");
    for (linha = 0; linha < 10; linha++)
    {
      printf("\t");
      for (coluna = 0; coluna < 10; coluna++)
      {
        printf(" %i", caixa_1[linha][coluna]);
      }
      printf("\n");
    }
    pula_Linha();
    printf("\t DEPOIS: \n");
    for (linha = 0; linha < 10; linha++)
    {
      printf("\t");
      for (coluna = 0; coluna < 10; coluna++)
      {
        if (linha == coluna)
        {
          caixa_1[linha][coluna] = 1;
          printf(" %d", caixa_1[linha][coluna]);
        }
        else
        {
          printf(" %i", caixa_1[linha][coluna]);
        }
      }
      printf("\n");
    }
    pula_Linha();
    system("pause");
  }
  // -- Fim do Exercício 1 -- //
  // -- Início do Exercício 2 -- //
  void exercicio_2()
  {
    int caixa_2[10][10] = {0};
    register unsigned int linha, coluna;
    system("cls");
    printf("\n \n");
    printf("\n \t **************************************************");
    printf("\n \t ******************* Exercicio 2 ******************");
    printf("\n \t **************************************************");
    printf("\n \t ******  Imprimir 1 somente nas casas pares  ******");
    printf("\n \t ******  de uma matriz[10][10]               ******");
    printf("\n \t **************************************************");
    printf("\n \n");
    printf("\t ANTES: \n");
    for (linha = 0; linha < 10; linha++)
    {
      printf("\t");
      for (coluna = 0; coluna < 10; coluna++)
      {
        printf(" %i", caixa_2[linha][coluna]);
      }
      printf("\n");
    }
    pula_Linha();
    printf("\t DEPOIS: \n");
    for (linha = 0; linha < 10; linha++)
    {
      printf("\t");
      for (coluna = 0; coluna < 10; coluna++)
      {
        int resto_Linha = (linha % 2);
        int resto_Coluna = (coluna % 2);
        if ((resto_Linha == 0) && (resto_Coluna == 0))
        {
          caixa_2[linha][coluna] = 1;
          printf(" %i", caixa_2[linha][coluna]);
        }
        else
        {
          printf(" %i", caixa_2[linha][coluna]);
        }
      }
      printf("\n");
    }
    pula_Linha();
    system("pause");
  }
  // -- Fim do Exercício 2 -- //
  // -- Início do Exercício 3 -- //
  void exercicio_3()
  {
    int caixa_3[10][10] = {0};
    register unsigned int linha, coluna;
    system("cls");
    printf("\n \n");
    printf("\n \t **************************************************");
    printf("\n \t ******************* Exercicio 3 ******************");
    printf("\n \t **************************************************");
    printf("\n \t *****  Imprimir 1 somente nas casas impares  *****");
    printf("\n \t *****  de uma matriz[10][10]                 *****");
    printf("\n \t **************************************************");
    printf("\n \n");
    printf("\t ANTES: \n");
    for (linha = 0; linha < 10; linha++)
    {
      printf("\t");
      for (coluna = 0; coluna < 10; coluna++)
      {
        printf(" %i", caixa_3[linha][coluna]);
      }
      printf("\n");
    }
    pula_Linha();
    printf("\t DEPOIS: \n");
    for (linha = 0; linha < 10; linha++)
    {
      printf("\t");
      for (coluna = 0; coluna < 10; coluna++)
      {
        int resto_Linha = (linha % 2);
        int resto_Coluna = (coluna % 2);
        if ((resto_Linha == 1) && (resto_Coluna == 1))
        {
          caixa_3[linha][coluna] = 1;
          printf(" %i", caixa_3[linha][coluna]);
        }
        else
        {
          printf(" %i", caixa_3[linha][coluna]);
        }
      }
      printf("\n");
    }
    pula_Linha();
    system("pause");
  }
  // -- Fim do Exercício 3 -- //
  // -- Início do Exercício 4 -- //
  void exercicio_4()
  {
    int n = 10, m = 10;
    int caixa_4[n][m];
    register unsigned int linha, coluna;
    system("cls");
    printf("\n \n");
    printf("\n \t **************************************************");
    printf("\n \t ******************* Exercicio 4 ******************");
    printf("\n \t **************************************************");
    printf("\n \t ** Imprimir o numero 1 nas diagonais principal e *");
    printf("\n \t ** secundaria de uma matriz[10][10] - igual um X *");
    printf("\n \t **************************************************");
    printf("\n \n");
    printf("\t ANTES: \n");
    for (linha = 0; linha < n; linha++)
    {
      printf("\t");
      for (coluna = 0; coluna < m; coluna++)
      {
        caixa_4[linha][coluna] = 0;
        printf(" %i", caixa_4[linha][coluna]);
      }
      printf("\n");
    }
    pula_Linha();
    printf("\t DEPOIS: \n");
    for (linha = 0; linha < n; linha++)
    {
      printf("\t");
      for (coluna = 0; coluna < m; coluna++)
      {
        int soma_LinCol = (linha + coluna);
        if (linha == coluna)
        {
          caixa_4[linha][coluna] = 1;
          printf(" %d", caixa_4[linha][coluna]);
        }
        else if (soma_LinCol == (n - 1))
        {
          caixa_4[linha][coluna] = 1;
          printf(" %i", caixa_4[linha][coluna]);
        }
        else
        {
          caixa_4[linha][coluna] = 0;
          printf(" %i", caixa_4[linha][coluna]);
        }
      }
      printf("\n");
    }
    pula_Linha();
    system("pause");
  }
  // -- Fim do Exercício 4 -- //
  // -- Início do Exercício 5 -- //
  void exercicio_5()
  {
    system("cls");
    printf("\n \n \t Exercicio 5 \n \n \n");
    system("pause");
  }
  // -- Fim do Exercício 5 -- //
  // -- Início do Exercício 6 -- //
  void exercicio_6()
  {
    system("cls");
    printf("\n \n \t Exercicio 6 \n \n \n");
    system("pause");
  }
  // -- Fim do Exercício 6 -- //
  // -- Início do Exercício 7 -- //
  void exercicio_7()
  {
    system("cls");
    printf("\n \n \t Exercicio 7 \n \n \n");
    system("pause");
  }
  // -- Fim do Exercício 7 -- //
  // -- Início do Exercício 8 -- //
  void exercicio_8()
  {
    system("cls");
    printf("\n \n \t Exercicio 8 \n \n \n");
    system("pause");
  }
  // -- Fim do Exercício 8 -- //
  // -- Início do Exercício 9 -- //
  void exercicio_9()
  {
    system("cls");
    printf("\n \n \t Exercicio 9 \n \n \n");
    system("pause");
  }
  // -- Fim do Exercício 9 -- //
  // -- Início do Exercício 10 -- //
  void exercicio_10()
  {
    system("cls");
    printf("\n \n \t Exercicio 10 \n \n \n");
    system("pause");
  }
  // -- Fim do Exercício 10 -- //
  // -- Início do Exercício 11 -- //
  void exercicio_11()
  {
    system("cls");
    printf("\n \n \t Exercicio 11 \n \n \n");
    system("pause");
  }
  // -- Fim do Exercício 11 -- //
  // -- Início do Exercício 12 -- //
  void exercicio_12()
  {
    system("cls");
    printf("\n \n \t Exercicio 12 \n \n \n");
    system("pause");
  }
  // -- Fim do Exercício 12 -- //
  // -- Início do Exercício 13 -- //
  void exercicio_13()
  {
    system("cls");
    printf("\n \n \t Exercicio 13 \n \n \n");
    system("pause");
  }
  // -- Fim do Exercício 13 -- //
  // -- Início do Exercício 14 -- //
  void exercicio_14()
  {
    system("cls");
    printf("\n \n \t Exercicio 14 \n \n \n");
    system("pause");
  }
  // -- Fim do Exercício 14 -- //
  // -- Início do Exercício 15 -- //
  void exercicio_15()
  {
    system("cls");
    printf("\n \n \t Exercicio 15 \n \n \n");
    system("pause");
  }
  // -- Fim do Exercício 15 -- //
// ----- Fim da Seção de Funções de Exercícios ----- //



// ----- Início da Função Principal ----- //
int main () 
{
  int opcao_Principal;
  do 
  {
    opcao_Principal = menu_Principal();
    switch (opcao_Principal)
    {
    case 0:
      /* Sair = 0 */
      system("cls");
      printf("\n \t Tchau amiguinho. Volte Sempre! \n");
      printf("\n \t 'Que a forca esteja com voce!' \n \n \n");
      system("pause");
      break;
    case 1:
      /* Exercício 1: */
      exercicio_1();
      break;
    case 2:
      /* Exercício 2: */
      exercicio_2();
      break;
    case 3:
      /* Exercício 3: */
      exercicio_3();
      break;
    case 4:
      /* Exercício 4: */
      exercicio_4();
      break;
    case 5:
      /* Exercício 5: */
      exercicio_5();
      break;
    case 6:
      /* Exercício 6: */
      exercicio_6();
      break;
    case 7:
      /* Exercício 7: */
      exercicio_7();
      break;
    case 8:
      /* Exercício 8: */
      exercicio_8();
      break;
    case 9:
      /* Exercício 9: */
      exercicio_9();
      break;
    case 10:
      /* Exercício 10: */
      exercicio_10();
      break;
    case 11:
      /* Exercício 11: */
      exercicio_11();
      break;
    case 12:
      /* Exercício 12: */
      exercicio_12();
      break;
    case 13:
      /* Exercício 13: */
      exercicio_13();
      break;
    case 14:
      /* Exercício 14: */
      exercicio_14();
      break;
    case 15:
      /* Exercício 15: */
      exercicio_15();
      break;
    default:
      /* Opção Inválida! */
      system("cls");
      printf("\n \t Opcao Invalida! \n");
      printf("\n \t Tente novamente! \n \n \n");
      system("pause");
      break;
    }
  } while (opcao_Principal != 0);
  return 0;
};
// ----- Fim da Função Principal ----- //

