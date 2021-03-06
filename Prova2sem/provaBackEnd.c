// Instituição: Faculdade de Tecnologia Senai Mato Grosso - Fatec Senai
// Curso Superior: Análise e Desenvolvimento de Sistemas
// Disciplina: Laboratório Algoritmos e Programação II
// Atividade: prova do primeiro bimestre
// Aluno/autor: Junior Martins - Turma: ADS-2020/1
// Menu: III Funções Auxiliares / V Funções Exercícios / X Main //

#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros.
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings
#include <windows.h> // biblioteca que contém declarações para todas as funções da API do Windows, todos os macros comuns utilizados pelos programadores do Windows e todos os tipos de dados utilizados pelas várias funções e subsistemas.
#include <locale.h> // biblioteca para garantir cedilha e acentuação
#include <time.h> // biblioteca para manipulação de datas e horários


// -- Início da Declaração de Variáveis Globais -- //
int linha = 0, coluna = 0, contador = 0;
int opcao_Principal = 0;
int mapa_BatalhaNaval[21][21];
int mapa_CampoMinado[21][21];
int contador_Cadastro = 0;
char repete_Geral;
// -- Fim da Declaração de Variáveis Globais -- //


// -- Início da Declaração dos Protótipos das principais Funções -- //
void exercicio_1(void);
void exercicio_2(void);
void exercicio_3(void);
void exercicio_4(void);
void exercicio_5(void);
void exercicio_6(void);
void exercicio_7(void);
void exercicio_8(void);
void exercicio_9(void);
void exercicio_10(void);
void exercicio_11(void);
void exercicio_12(void);
void exercicio_13(void);
void exercicio_14(void);
void exercicio_15(void);
// -- Fim da Declaração dos Protótipos das principais Funções -- //


// ------------------------------------------------- //
// ------------- Início Menu Principal ------------- //
// ------------------------------------------------- //
int menu_Principal()
{
  printf("\t **************************************************\n");
  printf("\t *********************  MENU  *********************\n");
  printf("\t **************************************************\n");
  printf("\t ******************  Exercicio 1  *****************\n");
  printf("\t ******************  Exercicio 2  *****************\n");
  printf("\t ******************  Exercicio 3  *****************\n");
  printf("\t ******************  Exercicio 4  *****************\n");
  printf("\t ******************  Exercicio 5  *****************\n");
  printf("\t ******************  Exercicio 6  *****************\n");
  printf("\t ******************  Exercicio 7  *****************\n");
  printf("\t ******************  Exercicio 8  *****************\n");
  printf("\t ******************  Exercicio 9  *****************\n");
  printf("\t ******************  Exercicio 10 *****************\n");
  printf("\t ******************  Exercicio 11 *****************\n");
  printf("\t ******************  Exercicio 12 *****************\n");
  printf("\t ******************  Exercicio 13 *****************\n");
  printf("\t ******************  Exercicio 14 *****************\n");
  printf("\t ******************  Exercicio 15 *****************\n");
  printf("\t ******************     Sair 0    *****************\n");
  printf("\t **************************************************\n");
  printf("\t ******************  Qual opcao (0 a 15)?  ");
  setbuf(stdin, NULL);
  int opcao = 0;
  scanf("%d", &opcao);
  return(opcao);
}
// ------------------------------------------------- //
// --------------- Fim Menu Principal -------------- //
// ------------------------------------------------- //



// ------------------------------------------------- //
// ----- Início da Seção de Funções Auxiliáres ----- //
// ------------------------------------------------- //
      // -------000000--000000--000000------- //
      // --------0000----0000----0000-------- //
      // --------0000----0000----0000-------- //
      // --------0000----0000----0000-------- //
      // --------0000----0000----0000-------- //
      // --------0000----0000----0000-------- //
      // --------0000----0000----0000-------- //
      // --------0000----0000----0000-------- //
      // --------0000----0000----0000-------- //
      // --------0000----0000----0000-------- //
      // --------0000----0000----0000-------- //
      // -------000000--000000---00000------- //

  // -- Início de função para Bart Simpson -- //
  void fun_Abertura()
  {
    system("cls");
    printf("\n \t    \\  /\\  /\\  /\\  /\\  /\\  /\\  /                                ");
    printf("\n \t     \\/  \\/  \\/  \\/  \\/  \\/  \\/                                 ");
    printf("\n \t     |                        |      H   H  EEEEE  Y   Y       ");
    printf("\n \t     |                        |      H   H  E      Y   Y       ");
    printf("\n \t     |                        |      HHHHH  EEE     Y Y        ");
    printf("\n \t     |                        |      H   H  E        Y         ");
    printf("\n \t     | __----__      __----__ |      H   H  EEEEE    Y         ");
    printf("\n \t     |/        \\    /        \\|                                ");
    printf("\n \t     |          |  |          |      M   M   AAA   N   N   !!  ");
    printf("\n \t   --|\\     *  /    \\     *  /|--    MM MM  A   A  NN  N   !!  ");
    printf("\n \t  /  | --____--      --____-- |  \\   M M M  AAAAA  N N N   !!  ");
    printf("\n \t | (-|         /    \\         |-) |  M   M  A   A  N  NN       ");
    printf("\n \t  \\  |.        \\____/        .|  /   M   M  A   A  N   N   ()  ");
    printf("\n \t   --/                        \\--                               ");
    printf("\n \t    /                          \\                                ");
    printf("\n \t    `--______________________--'                                ");
    printf("\n \t       \\_                  _/                                   ");
    printf("\n \t         `---__      __---'                                     ");
    printf("\n \t               `----'                                           ");
    printf("\n ");
    return;
  }
  // -- Fim de função para Bart Simpson -- //

  // -- Início de função para pular linha -- //
  void pula_Linha(void) 
  {
    printf("\n \n");
    return;
  }
  // -- Fim de função para pular linha -- //

  // -- Início de função para cabeçalho de apresentação de exercício - 1 a 9 -- //
  void cabecalho_Exercicio(void)
  {
    printf("\n \t ***************************************************");
    printf("\n \t ****************** Exercicio %i ********************", opcao_Principal);
    printf("\n \t ***************************************************");
    return;
  }
  // -- Fim de função para cabeçalho de apresentação de exercício - 1 a 9 -- //

  // -- Início de função para cabeçalho de apresentação de exercício - 10 a 15 -- //
  void cabecalho_Exercicio2(void)
  {
    printf("\n \t ***************************************************");
    printf("\n \t ****************** Exercicio %i *******************", opcao_Principal);
    printf("\n \t ***************************************************");
    return;
  }
  // -- Fim de função para cabeçalho de apresentação de exercício - 10 a 15 -- //

  // -- Início de função para submenu de impressão do exercício 10 -- //
  void subMenu10(void)
  {
    printf("\n \t ***************************************************");
    printf("\n \t *******************  SubMenu 10  ******************");
    printf("\n \t ***************************************************");
    printf("\n \t ********  0 - Voltar ao menu principal.    ********");
    printf("\n \t ********  1 - Cadastrar mais carros;       ********");
    printf("\n \t ********  2 - Mostrar cadastros e voltar;  ********");
    printf("\n \t ********  3 - Imprimir cadastros e voltar; ********");
    printf("\n \t ***************************************************");
    printf("\n \t *********  Qual opcao (0 a 3)?  ");
    return;
  }
  // -- Fim de função para submenu de impressão do exercício 10 -- //

  // -- Início de função de forca do exercício 13 -- //
  void fun_Forca(int tamPalavra2, char palavraObscura2[15])
  {
    pula_Linha();
    printf("\n \t    +--------+         ");
    printf("\n \t    |        |         ");
    printf("\n \t    |                  ");
    printf("\n \t    |                  ");
    printf("\n \t    |                  ");
    printf("\n \t    |                  ");
    printf("\n \t  ===================  ");
    printf("\n \t");
    printf("\n \t Palavra de %i letras: ", tamPalavra2);
    for (contador = 0; contador < tamPalavra2; contador++)
    {
      printf(" %c", palavraObscura2[contador]);
    }
    return;
  }
  // -- Fim de função de forca do exercício 13 -- //

  // -- Início da função do desenho Bart Simpson -- //
  void fun_Bart(void)
  {
    printf("\n Tchau amiguinho. Volte Sempre! \n");
    printf("\n                                                          ");  
    printf("\n                             . .  ,  ,                    ");
    printf("\n                             |` \\/ \\/ \\,',                ");
    printf("\n                             ;          ` \\/\\,.           ");
    printf("\n                            :               ` \\,/         ");
    printf("\n                            |                  /          ");
    printf("\n                            ;                 :           ");
    printf("\n                           :                  ;           ");
    printf("\n                           |      ,---.      /            ");
    printf("\n                          :     ,'     `,-._ \\            ");
    printf("\n                          ;    (   o    \\   `'            ");
    printf("\n                        _:      .      ,'  o ;            ");
    printf("\n                       /,.`      `.__,'`-.__,             ");
    printf("\n                       \\_  _               \\              ");
    printf("\n                      ,'  / `,          `.,'              ");
    printf("\n                ___,'`-._ \\_/ `,._        ;               ");
    printf("\n             __;_,'      `-.`-'./ `--.____)               ");
    printf("\n          ,-'           _,--\\^-'                          ");
    printf("\n        ,:_____      ,-'     \\                            ");
    printf("\n       (,'     `--.  \\;-._    ;                           ");
    printf("\n       :    Y      `-/    `,  :                           ");
    printf("\n       :    :       :     /_;'                            ");
    printf("\n       :    :       |    :                                ");
    printf("\n        \\    \\      :    :                                ");
    printf("\n         `-._ `-.__, \\    `.                              ");
    printf("\n            \\   \\  `. \\     `.                            ");
    printf("\n          ,-;    \\---)_\\ ,','/                            ");
    printf("\n          \\_ `---'--'  ,'^-;'                             ");
    printf("\n          (_`     ---'  ,-')                              ");
    printf("\n          / `--.__,. ,-'    \\                             ");
    printf("\n -hrr-    )-.__,-- ||___,--' `-.                          ");
    printf("\n         /._______,|__________,'\\                         ");
    printf("\n         `--.____,'|_________,-'                          ");
    printf("\n                                                          ");
    return;
  }
  // -- Fim da função do desenho Bart Simpson -- //

  // -- Início da função de desenho caveira em ASCII -- //
  void fun_Caveira(void)
  {
    pula_Linha();
    printf("\n ´´´¶¶¶¶´´´´´´´´´´s¶¶¶¶¶´´´´´´´´´´´s¶¶¶   ");
    printf("\n ´´´´¶¶¶¶¢´´´´´7¶¶¶¶¶¶¶¶¶¶¶¶¶´´´´´´´¶¶¶¶  ");
    printf("\n ´´´7¶¶¶¶¢´´´¢¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶´´´´s¶¶¶¶s ");
    printf("\n ´´¶¶¶¶¶¶¶¶´ø¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶1´¶¶¶¶¶¶¶¶");
    printf("\n ´´¢øs$¶¶¶¶1¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶´¶¶¶¶¢¢$$");
    printf("\n ´´´´´´´´7¢ø¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶s´ø      ");
    printf("\n ´´´´´´´´´´¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶        ");
    printf("\n ´´´´´´´´´´1¶¶¶¶ø´´7¶¶¶¶¶1´ø¶¶¶¶¶s        ");
    printf("\n ´´´´´´´´´´´¶¶´´´´´´´¶¶¶´´´´´´s¶¶         ");
    printf("\n ´´´´´´´´´´1¶¶´´´´´´$¶¶¶1´´´´´´¶¶1        ");
    printf("\n ´´´´´´´´´´´¶¶¶´´s¶¶¶´´ø¶¶s´´¶¶¶¶         ");
    printf("\n ´´´´´´´´´´´7¶¶¶¶¶¶¶¶´´´¶¶¶¶¶¶¶¶1         ");
    printf("\n ´´´´´´´´´´´´´¶¶¶¶¶¶¶s$s¶¶¶¶¶¶            ");
    printf("\n ´´´´´´´´´´´ø¶´¶s¶¶¶¶¶¶¶¶¶¶¶´¶´¶s         ");
    printf("\n ´´´´7´´´´$¶¶¶´¶´´´´´´´´´´´$´¶¶¶¶¶        ");
    printf("\n ´1¶¶¶¶¶¶¶¶¶¶ø´¶´¶¶$¶¶$¶¶$¶7¶1´¶¶¶¶¶¶¶¶¶¶¶");
    printf("\n ´´¶¶¶¶¶¶¶¶´´´´¶¶¶¶¶¶¶¶¶¶¶¶¶¶1´´´¶¶¶¶¶¶¶¶¶");
    printf("\n ´´´ø¶¶¶¶¶´´´´´´1¶¶¶¶¶¶¶¶¶¶¢´´´´´´¶¶¶¶¶¶¶ ");
    printf("\n ´´´´´s¶¶ø´´´´´´´´´$¶¶¶¶¶s´´´´´´´´1¶¶¶    ");
    return;
  }
  // -- Fim da função de desenho caveira em ASCII -- //

  // -- Início da função de desenho Nota 10 em ASCII -- //
  void fun_Nota10(void)
  {
    printf("\n \t 00000000000000000000000000000000000000 ");
    printf("\n \t 00000000______0000000000______00000000 ");
    printf("\n \t 000000___0____000000000________0000000 ");
    printf("\n \t 00000___00____00000000____00____000000 ");
    printf("\n \t 0000___000____0000000____0000____00000 ");
    printf("\n \t 000___0000____000000____000000____0000 ");
    printf("\n \t 0000000000____000000____000000____0000 ");
    printf("\n \t 0000000000____000000____000000____0000 ");
    printf("\n \t 0000000000____0000000____0000____00000 ");
    printf("\n \t 0000000000____00000000____00____000000 ");
    printf("\n \t 0000000000____000000000________0000000 ");
    printf("\n \t 00000000000000000000000000000000000000 ");
    return;
  }
  // -- Fim da função de desenho Nota 10 em ASCII -- //

  // -- Início da função de Mapa da Batalha Naval em ASCII -- //
  int fun_Mapa(int mapa[21][21])
  {
    system("cls");
    for (int linha = 0; linha < 21; linha++)
    {
      printf("\n");
      for (int coluna = 0; coluna < 21; coluna++)
      {
        if (mapa[linha][coluna] < 10)
        {
          printf(" ");
        }
        printf("%i  ", mapa[linha][coluna]);
      }
    }
    return;
  }
  // -- Fim da função de Mapa da Batalha Naval em ASCII -- //

  // -- Início da função Repete o Exercício -- //
  char repete_Exercicio()
  {
    char repeteExercicio = 'S';
    pula_Linha();
    setbuf(stdin, NULL);
    printf("\t Repetir - 'S' ou 'N'?  ");
    scanf(" %c", &repeteExercicio);
    setbuf(stdin, NULL);
    repeteExercicio = toupper(repeteExercicio);
    return(repeteExercicio);
  }
  // -- Fim da função Repete o Exercício -- //

// ------------------------------------------------- //
// ------- Fim da Seção de Funções Auxiliáres ------ //
// ------------------------------------------------- //



// ------------------------------------------------- //
// ---- Início da Seção de Funções de Exercícios --- //
// ------------------------------------------------- //
      // 0----------------------------------0 //
      // 00--------------------------------00 //
      // 0000----------------------------0000 //
      // --0000------------------------0000-- //
      // ----0000--------------------0000---- //
      // ------0000----------------0000------ //
      // --------0000------------0000-------- //
      // ----------0000--------0000---------- //
      // ------------0000----0000------------ //
      // --------------00000000-------------- //
      // ----------------0000---------------- //
      // -----------------00----------------- //
  // -- Início do Exercício 1 -- //
  void exercicio_1(void)
  {
    do
    {
      int caixa_1[10][10] = {0};
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio();
      printf("\n \t **** Imprimir diagonal da matriz[10][10] com 1  ***");
      printf("\n \t ***************************************************");
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
      repete_Geral = repete_Exercicio();
    } while(repete_Geral != 'N');
    return;
  } 
  // -- Fim do Exercício 1 -- //

  // -- Início do Exercício 2 -- //
  void exercicio_2(void)
  {
    do
    {
      int caixa_2[10][10] = {0};
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio();
      printf("\n \t *******  Imprimir 1 somente nas casas pares  ******");
      printf("\n \t *******  de uma matriz[10][10]               ******");
      printf("\n \t ***************************************************");
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
      repete_Geral = repete_Exercicio();
    } while(repete_Geral != 'N');
    return;
  }
  // -- Fim do Exercício 2 -- //

  // -- Início do Exercício 3 -- //
  void exercicio_3(void)
  {
    do
    {
      int caixa_3[10][10] = {0};
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio();
      printf("\n \t ******  Imprimir 1 somente nas casas impares  *****");
      printf("\n \t ******  de uma matriz[10][10]                 *****");
      printf("\n \t ***************************************************");
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
      repete_Geral = repete_Exercicio();
    } while(repete_Geral != 'N');
    return;
  }
  // -- Fim do Exercício 3 -- //

  // -- Início do Exercício 4 -- //
  void exercicio_4(void)
  {
    do
    {
      int n = 10, m = 10;
      int caixa_4[n][m];
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio();
      printf("\n \t ** Imprimir o numero 1 nas diagonais principal e **");
      printf("\n \t ** secundaria de uma matriz[10][10] - igual um X **");
      printf("\n \t ***************************************************");
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
      repete_Geral = repete_Exercicio();
    } while(repete_Geral != 'N');
    return;
  }
  // -- Fim do Exercício 4 -- //

  // -- Início do Exercício 5 -- //
  void exercicio_5(void)
  {
    do
    {
      char caixa_5[20];
      char caixa_6[20];
      register int M, N;
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio();
      printf("\n \t ** Faca algoritmo que imprima a palavra aigrenis **");
      printf("\n \t ** escrita corretamente.                         **");
      printf("\n \t ***************************************************");
      printf("\n \t ** Digite uma string?  ");
      scanf("%s", &caixa_5);
      printf("\n \n");
      printf("\t ANTES: \n");
      printf("\t %s", caixa_5);
      pula_Linha();
      printf("\t DEPOIS: \n");
      for (M = strlen(caixa_5) - 1, N = 0; M >= 0; M--, N++)
      {
        caixa_6[N] = caixa_5[M];
      }
      caixa_6[N] = '\0';
      printf("\t %s", caixa_6);
      repete_Geral = repete_Exercicio();
    } while (repete_Geral != 'N');
    return;
  }
  // -- Fim do Exercício 5 -- //

  // -- Início do Exercício 6 -- //
  void exercicio_6(void)
  {
    char pedido = "";
    do
    {
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio();
      printf("\n \t ****** Crie um programa que exiba um cardapio *****");
      printf("\n \t ***************************************************");
      printf("\n \t ****** a) Selecione mais que um produto;      *****");
      printf("\n \t ****** b) Imprima o total;                    *****");
      printf("\n \t ****** c) Libere para pegar um novo pedido.   *****");
      printf("\n \t ***************************************************");
      printf("\n \t ********************* Cardapio ********************");
      printf("\n \t ***** Codigo          Descricao          Preco ****");
      printf("\n \t *****  102             X-Tudo            11,25 ****");
      printf("\n \t *****  103           Baguncinha          14,75 ****");
      printf("\n \t *****  104           Mixto Quente        17,50 ****");
      printf("\n \t *****  105           Suco de Uva         07,25 ****");
      printf("\n \t *****  106         Encerrar Pedido             ****");
      printf("\n \t ***************************************************");
      int codigoProd = 0;
      float valorProd = 0;
      loopSeis:
        printf("\n \t ** Qual codigo deseja?  ");
        scanf("%i", &codigoProd);
        if (codigoProd == 102)
        {
          valorProd += 11.25;
        }
        else if (codigoProd == 103)
        {
          valorProd += 14.75;
        }
        else if (codigoProd == 104)
        {
          valorProd += 17.50;
        }
        else if (codigoProd == 105)
        {
          valorProd += 7.25;
        }
        else 
        {
          if (codigoProd <= 101 || codigoProd >= 107)
          {
            printf("\n \t \t Codigo invalido!");
            printf("\n");
          }
        }
      if (codigoProd != 106) goto loopSeis;
      printf("\n \t Preco total: %.2f", valorProd);
      printf("\n");
      setbuf(stdin, NULL);
      printf("\n \t Novo pedido - 'S' ou 'N'?  ");
      scanf("%c", &pedido);
      pedido = toupper(pedido);
    } while (pedido != 'N');
    return;
  }
  // -- Fim do Exercício 6 -- //

  // -- Início do Exercício 7 -- //
  void exercicio_7(void)
  {
    do
    {    
      int cont7 = 0;
      float vaso[3];
      int i = 0;
      float a = 0, b = 0, c = 0, aux = 0;
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio();
      printf("\n \t *** Crie programa para ler 4 valores i, a, b e c. *");
      printf("\n \t *** i e inteiro e positivo e a, b e c, sao reais. *");
      printf("\n \t *** E os mostre da seguinte forma:                *");
      printf("\n \t ***************************************************");
      printf("\n \t ** a) Se i=1 mostre a, b e c em ordem crescente;  *");
      printf("\n \t ** b) Se i=2 mostre a, b e c em ordem decrescente *");
      printf("\n \t ** c) Se i=3 mostre o maior valor no meio.        *");
      printf("\n \t ***************************************************");
      loopSete:
        printf("\n \t Digite valor de i:  ");
        scanf("%i", &i);
        setbuf(stdin, NULL);
      if (i < 0) goto loopSete;
      printf("\n \t Digite valor de a:  ");
      scanf("%f", &a);
      printf("\n \t Digite valor de b:  ");
      scanf("%f", &b);
      printf("\n \t Digite valor de c:  ");    
      scanf("%f", &c);
      setbuf(stdin, NULL);
      vaso[0] = a; 
      vaso[1] = b; 
      vaso[2] = c;
      if (i == 1)
      {
        printf("\n \t O valor de i: %i", i);
        for (contador = 1; contador < 3; contador++)
        {
          for (cont7 = 0; cont7 < 3 - 1; cont7++)
          {
            if (vaso[cont7] > vaso[cont7 + 1])
            {
                aux = vaso[cont7];
                vaso[cont7] = vaso[cont7 + 1];
                vaso[cont7 + 1] = aux;
            }
          }
        }
        printf("\n \t Valores em ordem crescente:  ");
        for (contador = 0; contador < 3; contador++)
        {
          printf("%.2f  ", vaso[contador]);
        }
      }
      else if (i == 2)
      {
        printf("\n \t O valor de i: %i", i);
        for (contador = 1; contador < 3; contador++)
        {
          for (cont7 = 0; cont7 < 3 - 1; cont7++)
          {
            if (vaso[cont7] < vaso[cont7 + 1])
            {
                aux = vaso[cont7];
                vaso[cont7] = vaso[cont7 + 1];
                vaso[cont7 + 1] = aux;
            }
          }
        }
        printf("\n \t Valores em ordem decrescente:  ");
        for (contador = 0; contador < 3; contador++)
        {
          printf("%.2f  ", vaso[contador]);
        }
      }
      else if (i == 3)
      {
        printf("\n \t O valor de i: %i", i);
        for (contador = 1; contador < 3; contador++)
        {
          for (cont7 = 0; cont7 < 3 - 1; cont7++)
          {
            if (vaso[cont7] > vaso[cont7 + 1])
            {
                aux = vaso[cont7];
                vaso[cont7] = vaso[cont7 + 1];
                vaso[cont7 + 1] = aux;
            }
          }
        }
        printf("\n \t Maior valor no centro:  ");
        aux = vaso[2];
        vaso[2] = vaso[1];
        vaso[1] = aux;
        for (contador = 0; contador < 3; contador++)
        {
          printf("%.2f  ", vaso[contador]);
        }
      }
      else 
      {
        printf("\n \t O valor de i: %i", i);
        printf("\n \t Valores em ordem de entrada (a, b e c):  %.2f  %.2f  %.2f", a, b, c);
      }
      repete_Geral = repete_Exercicio();
    } while (repete_Geral != 'N');
    return;
  }
  // -- Fim do Exercício 7 -- //

  // -- Início do Exercício 8 -- //
  void exercicio_8(void)
  {
    do
    {
      float valor[10] = {0}, transferir;
      int cont2;
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio();
      printf("\n \t ** Crie programa que receba 10 valores e imprima **");
      printf("\n \t ** em ordem crescente.                           **");
      printf("\n \t ***************************************************");
      for (contador = 0; contador < 10; contador++)
      {
        printf("\n \t Qual o valor %i? ", contador + 1);
        scanf("%f", &valor[contador]);
      }
      for (contador = 0; contador < 10; contador++)
      {
        for (cont2 = 0; cont2 < 9; cont2++)
        {
          if (valor[cont2] > valor[cont2 + 1])
          {
            transferir = valor[cont2];
            valor[cont2] = valor[cont2 + 1];
            valor[cont2 + 1] = transferir;
          }
        }
      }
      printf("\n \n \t Resultado:");
      printf("\n \t");
      for (contador = 0; contador < 10; contador++)
      {
        printf(" %.2f", valor[contador]);
      }
      repete_Geral = repete_Exercicio();
    } while (repete_Geral != 'N');
    return;
  }
  // -- Fim do Exercício 8 -- //

  // -- Início do Exercício 9 -- //
  void exercicio_9(void)
  {
    do
    {
      float quant_Combust = 0, preco_Combust = 0, dist_Percor = 0;
      float autonomia = 0, preco_Medio = 0;
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio();
      printf("\n \t *** Programa que receba valores de combustivel,  **");
      printf("\n \t *** quantidade abastecida e distancia da viagem  **");
      printf("\n \t *** e calcule o valor medio do combustivel e a   **");
      printf("\n \t *** autonomia do veiculo utilizado.              **");
      printf("\n \t ***************************************************");
      setbuf(stdin, NULL);
      printf("\n \t ** Total de litros de combustivel consumido?  ");
      scanf("%f", &quant_Combust);
      printf("\n \t ** Total de reais gastos com combustivel?  ");
      scanf("%f", &preco_Combust);
      printf("\n \t ** Distancia percorrida?  ");
      scanf("%f", &dist_Percor);
      pula_Linha();
      printf("\t -- Respostas --");
      autonomia = (dist_Percor / quant_Combust); // -- Calculo da autonomia -- //
      printf("\n \t Autonomia: %.2f km por litro.", autonomia);
      preco_Medio = (preco_Combust / quant_Combust); // -- calculo do preço médio por litro-- //
      printf("\n \t Preco medio: R$%.2f por litro.", preco_Medio);
      repete_Geral = repete_Exercicio();
    } while (repete_Geral != 'N');
    return;
  }
  // -- Fim do Exercício 9 -- //

  // -- Início do Exercício 10 -- //
  void exercicio_10(void)
  {
    int cont10 = 0;
    char deNovo1 = 'S';
    char deNovo2 = 'S';
    struct registroCarro
    {
      char placa[8];
      char modelo[20];
      int ano;
      char cor[10];
    } fichaCarro[50];
    do
    {
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio2();
      printf("\n \t ** Crie um programa que possa cadastrar um carro  *");
      printf("\n \t * com placa, modelo, ano e cor. E possa cadastrar *");
      printf("\n \t ** varios carros e mostrar todos os cadastrados.  *");
      printf("\n \t ***************************************************");
      printf("\n \t ** a) Imprimir o cadastro feito em um arquivo.    *");
      printf("\n \t ***************************************************");
      loopDez1:
        setbuf(stdin, NULL);
        printf("\n \n \t Digite a placa:  ");
        scanf("%s", &fichaCarro[contador].placa);
        printf("\n \t Digite o modelo:  ");
        scanf("%s", &fichaCarro[contador].modelo);
        loopDez2:
          printf("\n \t Digite o ano:  ");
          scanf("%i", &fichaCarro[contador].ano);
        if (fichaCarro[contador].ano < 1886) goto loopDez2;
        printf("\n \t Digite a cor:  ");
        scanf("%s", &fichaCarro[contador].cor);
        contador++;
        pula_Linha();
        setbuf(stdin, NULL);
        printf("\n \t Cadastrar de novo - 'S' ou 'N'?  ");
        scanf("%c", &deNovo1);
        deNovo1 = toupper(deNovo1);
      if (deNovo1 != 'N') goto loopDez1;
      pula_Linha();
      subMenu10(); // Função para chamar submenu //
      int opcao10 = 10;
      setbuf(stdin, NULL);
      scanf("%i", &opcao10);
      switch (opcao10)
      {
      case 0: /* Voltar ao Menu Principal*/
        deNovo2 = 'N';
        break;
      case 1: /* cadastrar */
        deNovo2 = 'S';
        break;
      case 2: /* mostrar e voltar ao menu principal */
        deNovo2 = 'N';
        system("cls");
        printf("\n \t ***************************************************");
        printf("\n \t **************** Mostrar Cadastros ****************");
        printf("\n \t ***************************************************");
        for (cont10 = 0; cont10 < contador; cont10++)
        {
          printf("\n");
          printf("\n \t Placa: %s", fichaCarro[cont10].placa);
          printf("\n \t Modelo: %s", fichaCarro[cont10].modelo);
          printf("\n \t Ano: %i", fichaCarro[cont10].ano);
          printf("\n \t Cor: %s", fichaCarro[cont10].cor);
        }
        pula_Linha();
        system("pause");
        break;
      case 3: /* imprimir e voltar ao menu principal */
        deNovo2 = 'N';
        FILE *pont_Arq; /* cria variável ponteiro para o arquivo */
        pont_Arq = fopen("c:/teste/fichasCarros.txt", "w"); /* abre o arquivo com tipo de abertura w */
        if (pont_Arq == NULL)
        {
          printf("\n \t Erro na abertura do arquivo!");
          pula_Linha();
          system("pause");
          exit(1);
        }
        else
        {
          fprintf(pont_Arq, "\t CADASTRO DE CARROS");
          for (cont10 = 0; cont10 <= contador; cont10++)
          {
            fprintf(pont_Arq, "\n \n %s", fichaCarro[cont10].placa);
            fprintf(pont_Arq, "\n %s", fichaCarro[cont10].modelo);
            fprintf(pont_Arq, "\n %i", fichaCarro[cont10].ano);
            fprintf(pont_Arq, "\n %s", fichaCarro[cont10].cor);
          }
          fclose(pont_Arq);
          printf("\t Dados gravados em arquivo externo!");
          pula_Linha();
          system("pause");
        }
        break;      
      default:
        deNovo2 = 'S';
        break;
      }
    } while (deNovo2 != 'N');
    return;
  }
  // -- Fim do Exercício 10 -- //

  // -- Início do Exercício 11 -- //
  void exercicio_11(void)
  {
    do
    { 
      float salario11 = 0, aumento_Sal11 = 0;
      int cargo11;
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio2();
      printf("\n \t **  Uma empresa concedera um aumento de salario  **");
      printf("\n \t ** aos seus funcionarios, variavel de acordo com **");
      printf("\n \t **  o cargo, conforme a tabela abaixo. Faca um   **");
      printf("\n \t ** algoritmo que leia o salario e o cargo de um  **");
      printf("\n \t **  funcionario e calcule o novo salario. Se o   **");
      printf("\n \t **  cargo do funcionario nao estiver na tabela,  **");
      printf("\n \t **  ele devera, entao, receber 40%% de aumento.   **");
      printf("\n \t ** Mostre o salario antigo, o novo e a diferenca. *");
      printf("\n \t ***************************************************");
      printf("\n \t *********************  Tabela  ********************");
      printf("\n \t ****   Codigo        Cargo        Percentual   ****");
      printf("\n \t ****    101         gerente           10%%      ****");
      printf("\n \t ****    102        engenheiro         20%%      ****");
      printf("\n \t ****    103         tecnico           30%%      ****");
      printf("\n \t ****    104          outro            30%%      ****");
      printf("\n \t ***************************************************");
      setbuf(stdin, NULL);
      loopOnze:
        printf("\n \t ****  Qual salario?  ");
        scanf("%f", &salario11);
      if (salario11 <= 0) goto loopOnze;
      printf("\n \t ****  Qual codigo do cargo?  ");
      scanf("%d", &cargo11);
      if (cargo11 == 101)
      {
        aumento_Sal11 = (salario11 * 1.1);
        printf("\n \n \t -- Respostas --");
        printf("\n \t Salario antigo: %.2f", salario11);
        printf("\n \t Salario novo: %.2f", aumento_Sal11);
        printf("\n \t Diferenca: %.2f", aumento_Sal11 - salario11);
      }
      else if (cargo11 == 102)
      {
        aumento_Sal11 = (salario11 * 1.2);
        printf("\n \n \t -- Respostas --");
        printf("\n \t Salario antigo: %.2f", salario11);
        printf("\n \t Salario novo: %.2f", aumento_Sal11);
        printf("\n \t Diferenca: %.2f", aumento_Sal11 - salario11);
      }
      else if (cargo11 == 103)
      {
        aumento_Sal11 = (salario11 * 1.3);
        printf("\n \n \t -- Respostas --");
        printf("\n \t Salario antigo: %.2f", salario11);
        printf("\n \t Salario novo: %.2f", aumento_Sal11);
        printf("\n \t Diferenca: %.2f", aumento_Sal11 - salario11);
      }
      else
      { 
        aumento_Sal11 = (salario11 * 1.4);
        printf("\n \n \t -- Respostas --");
        printf("\n \t Salario antigo: %.2f", salario11);
        printf("\n \t Salario novo: %.2f", aumento_Sal11);
        printf("\n \t Diferenca: %.2f", aumento_Sal11 - salario11);
      }
      repete_Geral = repete_Exercicio();
    } while (repete_Geral != 'N');
    return;
  }
  // -- Fim do Exercício 11 -- //

  // -- Início do Exercício 12 -- //
  void exercicio_12(void)
  {
    char deNovo12 = 'S', deNovoMenu = 'S', quantErrada = 'S';
    struct tabela_Produtos 
    {
      int codigo12;
      char name12[20];
      float preco12;
      int quant12;
    } tab_Prod[50], car_Compras[50];
    do
    {
      int c_Doze = 0;
      int op_Acao = 0, cod12 = 0, compra12 = 0;
      char novo_Cad = 'S';
      float total12Pagar = 0;
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio2();
      printf("\n \t ** Crie programa que mostre os produtos com o    **");
      printf("\n \t ** preco e a quantidade. E exiba a lista de com- **");
      printf("\n \t ** pras e total da compra realizada.             **");
      printf("\n \t ***************************************************");
      printf("\n \t *********************  Menu  **********************");
      printf("\n \t **********     Opcao         Acao        **********");
      printf("\n \t **********      201        Cadastrar     **********");
      printf("\n \t **********      202         Comprar      **********");
      printf("\n \t **********      203          Voltar      **********");
      printf("\n \t ***************************************************");
      loopDoze1:
        setbuf(stdin, NULL);
        printf("\n \t ****  Digite a opcao:  ");
        scanf("%d", &op_Acao);
      if (op_Acao < 201 || op_Acao > 203) goto loopDoze1;
      // -- Inicio da Seção Cadastrar - Exercício 12 -- //
      if (op_Acao == 201) // -- Cadastrar -- //
      {
        loopDoze2:
          pula_Linha();
          printf("\t Nome do produto:  ");
          scanf("%s", &tab_Prod[contador_Cadastro].name12);
          printf("\n \t Preco unitario:  ");
          scanf("%f", &tab_Prod[contador_Cadastro].preco12);
          printf("\n \t Quantidade:  ");
          scanf("%d", &tab_Prod[contador_Cadastro].quant12);
          tab_Prod[contador_Cadastro].codigo12 = (1000 + contador_Cadastro);
          contador_Cadastro++;
          pula_Linha();
          setbuf(stdin, NULL);
          printf("\t Novo Cadastro - 'S' ou 'N'?  ");
          scanf("%c", &novo_Cad);
          novo_Cad = toupper(novo_Cad);
        if (novo_Cad != 'N') goto loopDoze2;
      }
      // -- Fim da Seção Cadastrar - Exercício 12 -- //
      // -- Inicio da Seção Comprar - Exercício 12 -- //
      else if (op_Acao == 202)
      {
        do
        {
          system("cls");
          printf("\n \n");
          printf("\n \t ***************************************************");
          printf("\n \t *******************  Cardapio  ********************");
          printf("\n \t ***************************************************");
          for (contador = 0; contador < contador_Cadastro; contador++) // Mostra o cardápio //
          {
            printf("\n \t Codigo: %i", tab_Prod[contador].codigo12);
            printf("\n \t Nome: %s", tab_Prod[contador].name12);
            printf("\n \t Preco: %.2f", tab_Prod[contador].preco12);
            printf("\n \t Quantia: %i", tab_Prod[contador].quant12);
            printf("\n");
          }
          pula_Linha();
          loopDoze3: // Solicita e Trata Codigo de Compra
            setbuf(stdin, NULL);
            printf("\n \t Codigo da compra?  ");
            scanf("%i", &cod12);
          if (cod12 < 1000 || cod12 > 1000 + contador_Cadastro) goto loopDoze3;
          loopDoze4:
            setbuf(stdin, NULL);
            printf("\n \t Quantidade do produto?  ");
            scanf("%d", &compra12);
            if (compra12 < 1)
            {
              printf("\n \t Quantia invalida!");
              quantErrada = 'S';
            }
            else
            {
              for (contador = 0; contador < contador_Cadastro; contador++)
              {
                if (cod12 == tab_Prod[contador].codigo12)
                {
                  if (compra12 <= tab_Prod[contador].quant12) // Colocar compras no carrinho e reduzir do estoque //
                  {
                    car_Compras[c_Doze].codigo12 = tab_Prod[contador].codigo12;
                    strcpy(car_Compras[c_Doze].name12, tab_Prod[contador].name12); // STRCPY é função para copiar strings //
                    car_Compras[c_Doze].preco12 = tab_Prod[contador].preco12;
                    car_Compras[c_Doze].quant12 = compra12;
                    tab_Prod[contador].quant12 = (tab_Prod[contador].quant12 - compra12);
                    c_Doze++;
                    printf("\n \t Produto adicionado ao carrinho!");
                    quantErrada = 'N';
                  }
                  else
                  { 
                    printf("\n \t Quantia incompativel com o estoque! Tente de novo! \n");
                    quantErrada = 'S';
                  }
                }
              }
            }
          if (quantErrada != 'N') goto loopDoze4;
          pula_Linha();
          setbuf(stdin, NULL);
          printf("\n \t Comprar de novo - 'S' ou 'N'?  ");
          scanf("%c", &deNovo12);
          deNovo12 = toupper(deNovo12);
        } while(deNovo12 != 'N');
        pula_Linha();
        printf("\n \t Compra finalizada!");
        printf("\n \t Veja o carrinho de compras: \n");
        for (contador = 0; contador < c_Doze; contador++)
        {
          printf("\n \t Codigo: %i", car_Compras[contador].codigo12);
          printf("\n \t Nome: %s", car_Compras[contador].name12);
          printf("\n \t Preco: %.2f", car_Compras[contador].preco12);
          printf("\n \t Quantia: %i", car_Compras[contador].quant12);
          printf("\n");
          total12Pagar = total12Pagar + (car_Compras[contador].preco12 * car_Compras[contador].quant12);
        }
        printf("\n \t Pagamento total: R$%.2f", total12Pagar);
        for (contador = 0; contador < c_Doze; contador++) // zerar carrinho //
        {
          car_Compras[contador].codigo12 = 0;
          strcpy(car_Compras[contador].name12, "");
          car_Compras[contador].preco12 = 0;
          car_Compras[contador].quant12 = 0;
        }
        total12Pagar = 0; // zerar total a pagar //
        c_Doze = 0; // zerar contador de compras //
        pula_Linha();
        system("pause");
      }
      // -- Fim da Seção Comprar - Exercício 12 -- //
      else
      {
        deNovoMenu = 'N';
      }
    } while (deNovoMenu != 'N');
    return;
  }
  // -- Fim do Exercício 12 -- //

  // -- Início do Exercício 13 -- //
  void exercicio_13(void)
  {
    do
    {
      char letra = '\0', rep13 = 'S';
      char palavraSecreta[15]; 
      char palavraObscura[15] = {'_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '\0'};
      char palavraResetada[15] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
      int tamPalavra1 = 0, erro = 0, acerto = 0, perdeVida = 0;
      system("cls");
      pula_Linha();
      cabecalho_Exercicio2();
      printf("\n \t ***************************************************");
      printf("\n \t ***  Crie programa que simule o jogo da forca.  ***");
      printf("\n \t ***************************************************");
      printf("\n \t **  a) A palavra a ser adivinhada pode ser fixa; **");
      printf("\n \t **  b) A pessoa digita caracter e perde vidas;   **");
      printf("\n \t **  c) O jogador tem direito a 3 erros;          **");
      printf("\n \t **  d) Ganha o jogo quando completa a palavra.   **");
      printf("\n \t ***************************************************");
      pula_Linha();
      printf("\t OBS: nao deixe que vejam a palavra secreta!");
      printf("\n \t OBS: use palavras sem cedilha ou acento!");
      printf("\n \t OBS: use letras minusculas!");
      pula_Linha();
      printf("\n \t Digite a palavra secreta:  "); // Entrada da palavra secreta //
      setbuf(stdin, NULL);
      gets(palavraSecreta);
      tamPalavra1 = strlen(palavraSecreta);
      printf("\n \t Palavra secreta definida. Tecle enter para iniciar o jogo!");
      pula_Linha();
      system("pause");
      loopTreze:
        system("cls");
        fun_Forca(tamPalavra1, palavraObscura);
        pula_Linha();
        setbuf(stdin, NULL);
        printf("\n \t Chute uma letra: ");
        scanf("%c", &letra);
        for (contador = 0; contador < tamPalavra1; contador++)
        {
          if (letra == palavraSecreta[contador])
          {
            palavraObscura[contador] = palavraSecreta[contador];
            acerto++;
          }
          else if (letra != palavraSecreta[contador])
          {
            erro++;
            if (erro == tamPalavra1)
            {
              printf("\n \t .* . * . * . * . * . *  ");
              printf("\n \t .* . * (\\ *** /) * . * ");
              printf("\n \t .* . * ( \\(_)/ ) * . * ");
              printf("\n \t .* . * (_ /|\\ _) * . * ");
              printf("\n \t .* . * . /___\\ . * . * ");
              printf("\n \t *. * . * . * . . * . *  ");
              printf("\n \t   --- Perdeu Vida! ---");
              sleep(1);
              perdeVida++;
              erro = 0;
            }
            else if (erro < tamPalavra1 && contador == (tamPalavra1 - 1))
            {
              erro = 0;
            }
          }
        }
        if (acerto == tamPalavra1)
        {
          system("cls");
          fun_Forca(tamPalavra1, palavraObscura);
          pula_Linha();
          printf("\t Bingo!");
          printf("\n \t Descobriu a palavra secreta!");
          pula_Linha();
          rep13 = 'N';
          fun_Nota10();
        }
        else if (perdeVida == 3)
        { 
          system("cls");
          pula_Linha();
          printf("\n \t Perdeu! Errou tres vezes! Tente outra vez");
          rep13 = 'N';
          fun_Caveira();
        }
      if (rep13 != 'N') goto loopTreze;
      repete_Geral = repete_Exercicio();
    } while(repete_Geral != 'N');
    return;
  }
  // -- Fim do Exercício 13 -- //

  // -- Início do Exercício 14 -- //
  void exercicio_14(void)
  {
    do
    {
      char result_Batalha = 'S';
      int lin_Sort = 0, col_Sort[5] = {0}, coord_Lin = 0, coord_Col = 0;
      int llin, ccol;
      int bombaNoNavio = 0, bombaNaAgua = 0;
      for (llin = 0; llin < 22; llin++)
      {
        for (ccol = 0; ccol < 22; ccol++)
        {
          mapa_BatalhaNaval[llin][ccol] = 0;
        }
      }
      for (contador = 0; contador < 21; contador++)
      {
        mapa_BatalhaNaval[0][contador] = contador;
        mapa_BatalhaNaval[contador][0] = contador;
      }
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio2();
      printf("\n \t ***************************************************");
      printf("\n \t ** Crie um jogo que simule o jogo batalha naval: **");
      printf("\n \t ***************************************************");
      printf("\n \t ** a) O tamanho do quadro do jogador sera 20x20; **");
      printf("\n \t ** b) O Jogador jogara contra o computador, que  **");
      printf("\n \t ** sorteara as posicoes e marcara alguns espacos **");
      printf("\n \t ** de cinco na horizontal;                       **");
      printf("\n \t ** c) O Jogador escolhe uma posicao e o programa **");
      printf("\n \t ** verifica se acertou;                          **");
      printf("\n \t ** d) O programa devera ter contador de acertos  **");
      printf("\n \t ** para avisar quando o jogador vencer;          **");
      printf("\n \t ** e) O Jogador perde se errar 5 tentativas.     **");
      printf("\n \t ***************************************************");
      printf("\n \t ** Pronto para comecar? ");
      pula_Linha();
      system("pause");
      // Início do sorteio do local do navio //
      srand(time(NULL));
      lin_Sort = (rand() % 20) + 1;
      col_Sort[0] = (rand() % 16) + 1;
      for (contador = 1; contador < 5; contador++)
      {
        col_Sort[contador] = col_Sort[0] + contador;
      }
      // Fim do sorteio do local do navio //
      loopQuatorze1:
        system("cls");
        pula_Linha();
        fun_Mapa(mapa_BatalhaNaval);
        pula_Linha();
        printf("\t \t OBS: pode errar tres vezes.");
        printf("\n \t \t OBS: local do navio: %i, %d", lin_Sort, col_Sort[0]);
        printf("\n \t \t Acertos: %i / Erros: %d", bombaNoNavio, bombaNaAgua);
        pula_Linha();
        printf("\t Defina coordenadas para bombardeio: ");
        loopQuatorze2:
          setbuf(stdin, NULL);
          printf("\n \t Qual a coordenada linha? ");
          scanf("%i", &coord_Lin);
        if (coord_Lin < 1 || coord_Lin > 20) goto loopQuatorze2;
        loopQuatorze3:
          setbuf(stdin, NULL);
          printf("\n \t Qual a coordenada coluna? ");
          scanf("%i", &coord_Col);
        if (coord_Col < 1 || coord_Col > 20) goto loopQuatorze3;
        // Início da verificação de acerto //
        if (coord_Lin == lin_Sort && coord_Col == col_Sort[0])
        {
          mapa_BatalhaNaval[lin_Sort][col_Sort[0]] = 1;
          printf("\n \t Acertou! Bomba no navio!");
          pula_Linha();
          system("pause");
          bombaNoNavio++;
          if (bombaNoNavio == 5)
          { 
            result_Batalha = 'N';
          }
        }
        else if (coord_Lin == lin_Sort && coord_Col == col_Sort[1])
        {
          mapa_BatalhaNaval[lin_Sort][col_Sort[1]] = 1;
          printf("\n \t Acertou! Bomba no navio!");
          pula_Linha();
          system("pause");
          bombaNoNavio++;
          if (bombaNoNavio == 5)
          { 
            result_Batalha = 'N';
          }
        }
        else if (coord_Lin == lin_Sort && coord_Col == col_Sort[2])
        {
          mapa_BatalhaNaval[lin_Sort][col_Sort[2]] = 1;
          printf("\n \t Acertou! Bomba no navio!");
          pula_Linha();
          system("pause");
          bombaNoNavio++;
          if (bombaNoNavio == 5)
          { 
            result_Batalha = 'N';
          }
        }
        else if (coord_Lin == lin_Sort && coord_Col == col_Sort[3])
        {
          mapa_BatalhaNaval[lin_Sort][col_Sort[3]] = 1;
          printf("\n \t Acertou! Bomba no navio!");
          pula_Linha();
          system("pause");
          bombaNoNavio++;
          if (bombaNoNavio == 5)
          { 
            result_Batalha = 'N';
          }
        }
        else if (coord_Lin == lin_Sort && coord_Col == col_Sort[4])
        {
          mapa_BatalhaNaval[lin_Sort][col_Sort[4]] = 1;
          printf("\n \t Acertou! Bomba no navio!");
          pula_Linha();
          system("pause");
          bombaNoNavio++;
          if (bombaNoNavio == 5)
          { 
            result_Batalha = 'N';
          }
        }
        else 
        {
          mapa_BatalhaNaval[coord_Lin][coord_Col] = 3;
          printf("\n \t Errou! Bomba na agua!");
          pula_Linha();
          system("pause");
          bombaNaAgua++;
          if (bombaNaAgua == 3) 
          {
            result_Batalha = 'N';
          }
        }
        // Fim da verificação de acerto //
      if (result_Batalha != 'N') goto loopQuatorze1;
      if (bombaNoNavio == 5)
      {
        printf("\n \t Venceu!");
      }
      else if (bombaNaAgua == 3)
      {
        printf("\n \t Perdeu!");
      }
      repete_Geral = repete_Exercicio();
    } while(repete_Geral != 'N');
    return;
  }
  // -- Fim do Exercício 14 -- //

  // -- Início do Exercício 15 -- //
  void exercicio_15(void)
  {
    do
    {
      int mina_Sorteada_Linha = 0, mina_Sorteada_Coluna = 0;
      int mapa_Bombas[21][21], mapa_Lances[21][21];
      int coord_Horizontal = 0, coord_Vertical = 0;
      int vida_Boom = 0, campo_Vazio = 0;
      char resulta_Exploracao = 'S';
      // Início da criação dos tabuleiros //
      for (linha = 0; linha < 22; linha++) // Valor zero para todas as coordenadas //
      {
        for (coluna = 0; coluna < 22; coluna++)
        {
          mapa_CampoMinado[linha][coluna] = 0;
          mapa_Bombas[linha][coluna] = 0;
          mapa_Lances[linha][coluna] = 0;
        }
      }
      for (contador = 0; contador < 21; contador++) // Acrescenta referências nas laterais left e top //
      {
        mapa_CampoMinado[0][contador] = contador;
        mapa_CampoMinado[contador][0] = contador;
        mapa_Bombas[0][contador] = contador;
        mapa_Bombas[contador][0] = contador;
        mapa_Lances[0][contador] = contador;
        mapa_Lances[contador][0] = contador;
      }
      // Fim da criação dos tabuleiros //
      system("cls");
      printf("\n \n");
      cabecalho_Exercicio2();
      printf("\n \t ***************************************************");
      printf("\n \t ** Crie o jogo campo minado, onde o jogador esco-**");
      printf("\n \t ** lhera o caminho para escapar das bombas e, ao **");
      printf("\n \t ** final do jogo, o programa mostrara quantas ve-**");
      printf("\n \t ** zes o jogador escapou das bombas.             **");
      printf("\n \t ***************************************************");
      printf("\n \t ** a) O programa escolhera onde colocar bombas;  **");
      printf("\n \t ** b) A matriz devera ser de 20 x 20;            **");
      printf("\n \t ** c) O numero de bombas deve ser 1/4 da matriz. **");
      printf("\n \t ***************************************************");
      printf("\n \t ** Pronto para comecar? ");
      pula_Linha();
      system("pause");
      // Início do sorteio do local das bombas //
      srand(time(NULL));
      for (contador = 1; contador < 101; contador++)
      {
        mina_Sorteada_Linha = (rand() % 20) + 1;
        mina_Sorteada_Coluna = (rand() % 20) + 1;
        mapa_Bombas[mina_Sorteada_Linha][mina_Sorteada_Coluna] = 5;
      }
      // Fim do sorteio do local das bombas //
      loopQuinze1:
        system("cls");
        pula_Linha();
        fun_Mapa(mapa_CampoMinado);
        pula_Linha();
        printf("\t \t OBS: o campo possui 300 espacos limpos e 100 minados;");
        printf("\n \t \t OBS: tente acertar o maior numero de espacos sem minas;");
        printf("\n \t \t OBS: perca ao explodir cinco minas.");
        printf("\n \t \t Acertos: %i / Erros: %d", campo_Vazio, vida_Boom);
        pula_Linha();
        printf("\t Quais coordenadas explorar? ");
        loopQuinze2: // Captação das coordenadas linhas //
          setbuf(stdin, NULL);
          printf("\n \t Eixo horizontal: ");
          scanf("%i", &coord_Horizontal);
          if (coord_Horizontal == 99) goto loopQuinze4;
        if (coord_Horizontal < 1 || coord_Horizontal > 20) goto loopQuinze2;
        loopQuinze3: // Captação das coordenadas colunas //
          setbuf(stdin, NULL);
          printf("\n \t Eixo vertical: ");
          scanf("%i", &coord_Vertical);
        if (coord_Vertical < 1 || coord_Vertical > 20) goto loopQuinze3;
        mapa_Lances[coord_Horizontal][coord_Vertical] = 1; // Armazena o lance no mapa de lances //
        if (mapa_Bombas[coord_Horizontal][coord_Vertical] == 5) // Verifica se o lance acertou mina //
        { 
          printf("\n \t BOOMMMM! Pisou numa mina! Perdeu vida!");
          pula_Linha();
          system("pause");
          vida_Boom++;
          mapa_CampoMinado[coord_Horizontal][coord_Vertical] = 5;
          if (vida_Boom == 5)
          {
            printf("\n \t KABUUMMMMMMMM! Pisou cinco minas! Perdeu o jogo!");
            pula_Linha();
            system("pause");
            resulta_Exploracao = 'N';
          }
        }
        else if (mapa_Bombas[coord_Horizontal][coord_Vertical] != 5 && mapa_Bombas[coord_Horizontal][coord_Vertical] != 1)
        {
          printf("\n \t Parabens! Descobriu passagem limpa pelo campo minado!");
          pula_Linha();
          system("pause");
          campo_Vazio++;
          mapa_CampoMinado[coord_Horizontal][coord_Vertical] = 1;
          if (campo_Vazio == 300)
          { 
            printf("\n \t Parabénssssss! Descobriu 200m² de passagem limpa. Venceu o jogo!");
            pula_Linha();
            system("pause");
            resulta_Exploracao = 'N';
          }
        }
      if (resulta_Exploracao != 'N') goto loopQuinze1;
      printf("\n \t Quantia de acertos: %i", campo_Vazio);
      pula_Linha();
      loopQuinze4:
      repete_Geral = repete_Exercicio();
    } while(repete_Geral != 'N');
    return;
  }
  // -- Fim do Exercício 15 -- //

// ------------------------------------------------- //
// ----- Fim da Seção de Funções de Exercícios ----- //
// ------------------------------------------------- //



// ------- Início da Função Principal - Main ------- //
      // ----0000--------------------0000---- //
      // ------0000----------------0000------ //
      // --------0000------------0000-------- //
      // ----------0000--------0000---------- //
      // ------------0000----0000------------ //
      // --------------00000000-------------- //
      // ----------------0000---------------- //
      // --------------00000000-------------- //
      // ------------0000----0000------------ //
      // ----------0000--------0000---------- //
      // --------0000------------0000-------- //
      // ------0000----------------0000------ //
      // ----0000--------------------0000---- //
int main () 
{
  setlocale(LC_ALL, "Portuguese");
  do 
  {
    repete_Geral != 'S';
    fun_Abertura();
    opcao_Principal = menu_Principal();
    switch (opcao_Principal)
    {
    case 0:
      /* Sair = 0 */
      system("cls");
      fun_Bart();
      pula_Linha();
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
      printf("\n \t Opcao invalida! \n");
      printf("\n \t Tente novamente! \n \n \n");
      system("pause");
      break;
    }
  } while (opcao_Principal != 0);
  return 0;
};
// ------------------------------------------------- //
// --------- Fim da Função Principal - Main -------- //
// ------------------------------------------------- //

