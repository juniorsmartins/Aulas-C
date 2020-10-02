#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings
#define VERSAO "1.0";
unsigned int contdor;

struct cadastro_Produto
{
  char nome[15];
  float custo;
  float quantia;
  float lucro;
  unsigned int codigo;
} produto[100];


void pula_Linha() // Início da função para pular linha
{
  printf("\n\n");
};                 // Fim da função para pular linha


// ------------------------------------------------------------------------------------------------- //
// --------------------------------------  MENUS  -------------------------------------------------- //
// ------------------------------------------------------------------------------------------------- //


int menu_Principal() // Início da função que contém o Menu Principal
{
  system("cls");
  int opcao = 0;
  printf("******************************\n");
  printf("********  SOFTWARE X  ********\n");
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
  printf("* Selecione opcao (de 0 a 6)? ");
  scanf("%i", &opcao);
  return (opcao);
};                // Fim da função que contém o Menu Principal

int menu_Consultar()  // Início da função que contém o Menu Consultar
{
  system("cls");
  int opcao = 0;
  printf("******************************\n");
  printf("******  Menu Consultar  ******\n");
  printf("******************************\n");
  printf("***   Mostrar Geral - 1    ***\n");
  printf("**  Mostrar Especifico - 2  **\n");
  printf("*****     voltar - 3     *****\n");
  printf("*****      Sair - 0      *****\n");
  printf("******************************\n");
  printf("* Selecione opcao (de 0 a 3)? ");
  scanf("%i", &opcao);
  return (opcao);
};                  // Fim da função que contém o Menu Consultar


// ------------------------------------------------------------------------------------------------- //
// ------------------------------------  FERRAMENTAS  ---------------------------------------------- //
// ------------------------------------------------------------------------------------------------- //


int prog_Cadastrar()
{
  char opcao_DeNovo[1];                              // Início da estrutura de repetição para cadastrar produtos
  do 
  {
    system("cls");             // Início do cadastro de produtos
    pula_Linha();

    contdor++;
    produto[contdor].codigo = contdor;
    printf("\tNome: ");
    scanf("%s", &produto[contdor].nome);
    printf("\n\tCusto: ");
    scanf("%f", &produto[contdor].custo);
    printf("\n\tQuantia: ");
    scanf("%f", &produto[contdor].quantia);
    printf("\n\tMarkup: ");
    scanf("%f", &produto[contdor].lucro);

    printf("\n\tCodigo: %i", produto[contdor].codigo);
    printf("\n\tNome: %s", produto[contdor].nome);
    printf("\n\tCusto: %.2f", produto[contdor].custo);
    printf("\n\tQuantia: %.2f", produto[contdor].quantia);
    printf("\n\tMarkup: %.2f", produto[contdor].lucro);
    pula_Linha();

    pula_Linha();              // Início Opção Cadastrar Novamente
    printf("Cadastrar novamente? 'S' ou 'N' ");
    scanf("%s", &opcao_DeNovo[0]); // Fim Opção Cadastrar Novamente

  } while(opcao_DeNovo[0] == 'S' || opcao_DeNovo[0] == 's'); // Fim da estrutura de repetição para cadastrar produtos
};


int prog_Consultar() // Início da estrutura de consulta de produtos
{
  int opcao_Consultar;  // Início da estrutura de repetição do Menu Consultar
  do
  {
    register unsigned int contador; // Contador indexado aos registradores
    int teste;
    char consulta_Nome[15];
    system("cls");
    pula_Linha();

    opcao_Consultar = menu_Consultar();  // Chamada do Menu Consultar

    switch (opcao_Consultar)
    {
      case 1: // Mostrar Geral
        system("cls");
        pula_Linha();
        printf("***********************************\n");
        printf("********** Consulta Geral *********\n");
        printf("***********************************\n");
        for (contador = 1; contador <= contdor; contador++)
        {
          printf("\n\t--------------------");
          printf("\n\tCodigo: %i", produto[contador].codigo);
          printf("\n\tNome: %s", produto[contador].nome);
          printf("\n\tCusto: %.2f", produto[contador].custo);
          printf("\n\tQuantia: %.2f", produto[contador].quantia);
          printf("\n\tMarkup: %.2f", produto[contador].lucro);
          printf("\n\t--------------------\t");
        }
        pula_Linha();
        system("pause");
      break;

      case 2: //Mostrar Específico
        system("cls");
        pula_Linha();
        printf("Mostrar Especifico");
        pula_Linha();
        system("pause");
      break;

      case 3: //voltar
        system("cls");
        pula_Linha();
        printf("Voltando...!");
        pula_Linha();
        system("pause");
        opcao_Consultar = 0;
      break;

      case 0: //sair
        system("cls");
        pula_Linha();
        printf("Saindo...!");
        pula_Linha();
        system("pause");
        exit(0);
      break;

      default: // Opção Inválida!
        system("cls");
        pula_Linha();
        printf("Opcao Invalida!");
        pula_Linha();
        system("pause");
      break;

    }
    pula_Linha();
  } while (opcao_Consultar != 0);  // Fim da estrutura de repetição do Menu Consultar
  return 0;
};                   // Fim da estrutura de consulta de produtos


// ------------------------------------------------------------------------------------------------- //
// -----------------------------------   ROTEADOR   ------------------------------------------------ //
// ------------------------------------------------------------------------------------------------- //


int main ()  // Início da principal estrutura do programa (Roteador de Instruções)
{
  int opcao_Principal = 0;        // Início da estrutura de repetição para manutenção do Roteador de Instruções
  do
  {
    system("cls");

    opcao_Principal = menu_Principal(); // Chamada do Menu Principal

    switch (opcao_Principal)  /* Início do Roteador de Opções */
    {      
      case 1: /* Vender */
        system("cls");
        pula_Linha();
        printf("Vender!");
        pula_Linha();
        system("pause");
      break;

      case 2: /* Consultar */
        prog_Consultar();
      break;

      case 3: /* Cadastrar */
        prog_Cadastrar();
      break;

      case 4: /* Alterar */
        system("cls");
        pula_Linha();
        printf("Alterar!");
        pula_Linha();
        system("pause");
      break;

      case 5: /* Excluir */
        system("cls");
        pula_Linha();
        printf("Excluir!");
        pula_Linha();
        system("pause");
      break;

      case 6: /* Relatar */
        system("cls");
        pula_Linha();
        printf("Relatar!");
        pula_Linha();
        system("pause");
      break;

      case 0: /* Sair */
        system("cls");
        pula_Linha();
        printf("Sair!");
        pula_Linha();
        system("pause");
      break;

      default: /* Opção Inválida! */
        system("cls");
        pula_Linha();
        printf("Opcao Invalida!");
        pula_Linha();
        system("pause");
      break;
    }                       /* Fim do Roteador de Opções */

  } while (opcao_Principal != 0); // Fim da estrutura de repetição para manutenção do Roteador de Instruções
  return 0;
};           // Fim da principal estrutura do programa (Roteador de Instruções)
