#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

/*
  Linguagem de Programação C
  Software comercial para aprendizagem prática
*/

void pula_Linha()
{
  printf("\n\n");
}

int menu1_Principal()
{
  system("cls");
  int opcao = 0;
  printf("******************************\n");
  printf("******************************\n");
  printf("********  SOFTWARE X  ********\n");
  printf("******************************\n");
  printf("******  Menu Principal  ******\n");
  printf("******************************\n");
  printf("*****     Vender - 1     *****\n");
  printf("*****    Consultar - 2   *****\n");
  printf("*****    Cadastrar - 3   *****\n");
  printf("*****     Alterar - 4    *****\n");
  printf("*****     Excluir - 5    *****\n");
  printf("*****     Relatar - 6    *****\n");
  printf("*****      Sair - 0      *****\n");
  printf("******************************\n");
  printf("******************************\n");
  printf("* Selecione opção (de 0 a 6)? ");
  scanf("%i", &opcao);
  return (opcao);
}



int main ()
{
  int menu1_Opcao = 0;
  do
  {
    system("cls");

    /* Início do Menu Principal */
    menu1_Opcao = menu1_Principal();
    /* Fim do Menu Principal */

    /* Início do Roteador de Opções */
    switch (menu1_Opcao)
    {      
      case 1: 
        /* Vender */
        system("cls");
        pula_Linha();
        printf("Vender!");
        pula_Linha();
        system("pause");
      break;

      case 2:
        /* Consultar */
        system("cls");
        pula_Linha();
        printf("Consultar!");
        pula_Linha();
        system("pause");
      break;

      case 3:
        /* Cadastrar */
        system("cls");
        pula_Linha();
        printf("Cadastrar!");
        pula_Linha();
        system("pause");
      break;

      case 4:
        /* Alterar */
        system("cls");
        pula_Linha();
        printf("Alterar!");
        pula_Linha();
        system("pause");
      break;

      case 5:
        /* Excluir */
        system("cls");
        pula_Linha();
        printf("Excluir!");
        pula_Linha();
        system("pause");
      break;

      case 6:
        /* Relatar */
        system("cls");
        pula_Linha();
        printf("Relatar!");
        pula_Linha();
        system("pause");
      break;

      case 0:
        /* Sair */
        system("cls");
        pula_Linha();
        printf("Sair!");
        pula_Linha();
        system("pause");
      break;

      default:
        /* Opção Inválida! */
        system("cls");
        pula_Linha();
        printf("Opção Inválida!");
        pula_Linha();
        system("pause");
      break;
    }
    /* Fim do Roteador de Opções */

  } while (menu1_Opcao != 0);
  return 0;
}
