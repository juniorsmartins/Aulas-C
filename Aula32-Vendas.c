#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca 

char nome_Prod[] = {};
float custo_Prod[] = {0};
float lucro_Prod[] = {0};
int quantia_Prod[] = {0};
int codigo_Prod[] = {0};
int codigo_Contador = 0;

/*
  Linguagem de Programação C
  Software comercial para aprendizagem prática
*/

void pula_Linha()
{
  printf("\n\n");
}

int menu_Principal()
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

int prog_Cadastrar()
{
  char opcao_DeNovo;
  do
  {
    system("cls");

    // Início Entrada de Dados
    codigo_Contador++;
    pula_Linha();
    printf("Nome: ");
    scanf("%s", &nome_Prod[codigo_Contador]);
    printf("\nCusto: ");
    scanf("%f", &custo_Prod[codigo_Contador]);
    printf("\nQuantia: ");
    scanf("%i", &quantia_Prod[codigo_Contador]);
    printf("\nMarkup: ");
    scanf("%f", &lucro_Prod[codigo_Contador]);
    printf("\nCódigo: %i", codigo_Prod[codigo_Contador]);
    // Fim Entrada de Dados

    // Início Opção Cadastrar Novamente
    pula_Linha();
    printf("Cadastrar novamente? S ou N ");
    scanf("%c", &opcao_DeNovo);

    // Fim Opção Cadastrar Novamente

  } while(opcao_DeNovo == 'S' || opcao_DeNovo == 's');
  return 0;
}


int prog_Consultar()
{
  system("cls");
  pula_Linha();
  printf("Consultar!");
  pula_Linha();
  system("pause");
  return 0;
}





int main ()
{
  int opcao_Principal = 0;
  do
  {
    system("cls");

    /* Início do Menu Principal */
    opcao_Principal = menu_Principal();
    /* Fim do Menu Principal */

    /* Início do Roteador de Opções */
    switch (opcao_Principal)
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
        prog_Consultar();
      break;

      case 3:
        /* Cadastrar */
        prog_Cadastrar();
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

  } while (opcao_Principal != 0);
  return 0;
}
