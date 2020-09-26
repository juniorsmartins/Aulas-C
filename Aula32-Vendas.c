#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings

char nome_Prod[];
float custo_Prod[] = {0};
float lucro_Prod[] = {0};
float quantia_Prod[] = {0};
int codigo_Prod[] = {0};
int codigo_Contador = 0;


void pula_Linha() // Início da função para pular linha
{
  printf("\n\n");
}                 // Fim da função para pular linha


int menu_Principal() // Início da função que contém o Menu Principal
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
}                // Fim da função que contém o Menu Principal


int prog_Cadastrar()
{
  char opcao_DeNovo;                              // Início da estrutura de repetição para cadastrar produtos
  do 
  {
    system("cls");             // Início do cadastro de produtos
    codigo_Contador++;
    pula_Linha();
    printf("Nome: ");
    scanf("%c", &nome_Prod[codigo_Contador]);
    printf("\nCusto: ");
    scanf("%f", &custo_Prod[codigo_Contador]);
    printf("\nQuantia: ");
    scanf("%f", &quantia_Prod[codigo_Contador]);
    printf("\nMarkup: ");
    scanf("%f", &lucro_Prod[codigo_Contador]);
    printf("\nCódigo: %i", codigo_Prod[codigo_Contador]);
    pula_Linha();
    system("pause");           // Fim do cadastro de produtos

    pula_Linha();              // Início Opção Cadastrar Novamente
    printf("Cadastrar novamente? S ou N ");
    scanf("%c", &opcao_DeNovo); // Fim Opção Cadastrar Novamente

  } while(opcao_DeNovo == 'S' || opcao_DeNovo == 's'); // Fim da estrutura de repetição para cadastrar produtos
}


int prog_Consultar() // Início da estrutura de consulta de produtos
{
  system("cls");
  pula_Linha();
  printf("Consultar!");
  pula_Linha();
  system("pause");
  return 0;
}                   // Fim da estrutura de consulta de produtos





int main ()  // Início da principal estrutura do programa (Roteador de Instruções)
{
  int opcao_Principal = 0;        // Início da estrutura de repetição para manutenção do Roteador de Instruções
  do
  {
    system("cls");

    opcao_Principal = menu_Principal(); // Chamada do Menu Principal

    switch (opcao_Principal)  /* Início do Roteador de Opções */
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
    }                       /* Fim do Roteador de Opções */

  } while (opcao_Principal != 0); // Fim da estrutura de repetição para manutenção do Roteador de Instruções
  return 0;
}           // Fim da principal estrutura do programa (Roteador de Instruções)
