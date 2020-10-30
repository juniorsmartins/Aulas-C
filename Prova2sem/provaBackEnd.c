// Instituição: Faculdade de Tecnologia Senai Mato Grosso - Fatec Senai
// Curso Superior: Análise e Desenvolvimento de Sistemas
// Disciplina: Laboratório Algoritmos e Programação II
// Atividade: prova do primeiro bimestre
// Aluno/autor: Junior Martins - Turma: ADS-2020/1
#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros.
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <string.h> // biblioteca com funções para manipular strings
#include <windows.h> //// biblioteca que contém declarações para todas as funções da API do Windows, todos os macros comuns utilizados pelos programadores do Windows e todos os tipos de dados utilizados pelas várias funções e subsistemas.



// ----- Início Menu Principal ----- //
int menu_Principal()
{
  system("cls");
  printf("\n \n");
  printf("\t **************************************************\n");
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
  int opcao = 0;
  scanf("%d", &opcao);
  return(opcao);
}
// ----- Fim Menu Principal ----- //



// ----- Início da Seção de Funções Auxiliáres ----- //

  // -- Início de função para pular linha -- //
  void pula_Linha() 
  {
    printf("\n \n");
  }
  // -- Fim de função para pular linha -- //

  // -- Início de função para submenu de impressão do exercício 10 -- //
  void subMenu10()
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
  }
  // -- fim de função para submenu de impressão do exercício 10 -- //

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
    register int linha, coluna;
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
    char deNovo = 'S';
    do
    {
      char caixa_5[20];
      char caixa_6[20];
      register int M, N;
      system("cls");
      printf("\n \n");
      printf("\n \t **************************************************");
      printf("\n \t ******************* Exercicio 5 ******************");
      printf("\n \t **************************************************");
      printf("\n \t ** Faca algoritmo que imprima a palavra aigrenis *");
      printf("\n \t ** escrita corretamente.                         *");
      printf("\n \t **************************************************");
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
      pula_Linha();
      setbuf(stdin, NULL);
      printf("\n \t Repetir - 'S' ou 'N'?  ");
      scanf("%c", &deNovo);
      deNovo = toupper(deNovo);
    } while (deNovo != 'N');
    pula_Linha();
    system("pause");
    return 0;
  }
  // -- Fim do Exercício 5 -- //

  // -- Início do Exercício 6 -- //
  void exercicio_6()
  {
    char pedido = "";
    do
    {
      system("cls");
      printf("\n \n");
      printf("\n \t **************************************************");
      printf("\n \t ******************* Exercicio 6 ******************");
      printf("\n \t **************************************************");
      printf("\n \t ***** Crie um programa que exiba um cardapio *****");
      printf("\n \t ***** a) Selecione mais que um produto;      *****");
      printf("\n \t ***** b) Imprima o total;                    *****");
      printf("\n \t ***** c) Libere para pegar um novo pedido.   *****");
      printf("\n \t **************************************************");
      printf("\n \t ******************** Cardápio ********************");
      printf("\n \t **** Codigo          Descricao          Preco ****");
      printf("\n \t ****  102             X-Tudo            11,25 ****");
      printf("\n \t ****  103           Baguncinha          14,75 ****");
      printf("\n \t ****  104           Mixto Quente        17,50 ****");
      printf("\n \t ****  105           Suco de Uva         07,25 ****");
      printf("\n \t ****  106         Encerrar Pedido             ****");
      printf("\n \t **************************************************");
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
            printf("\n \t Codigo invalido! Repita");
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
    printf("\n \n");
    system("pause");
  }
  // -- Fim do Exercício 6 -- //

  // -- Início do Exercício 7 -- //
  void exercicio_7()
  {
    char deNovo = 'S';
    do
    {    
      register int contador7 = 0, cont7 = 0;
      float vaso[3];
      int i = 0;
      float a = 0, b = 0, c = 0, aux = 0;
      system("cls");
      printf("\n \n");
      printf("\n \t **************************************************");
      printf("\n \t ******************* Exercicio 7 ******************");
      printf("\n \t **************************************************");
      printf("\n \t ** Crie programa para ler 4 valores i, a, b e c. *");
      printf("\n \t ** i e inteiro e positivo e a, b e c, sao reais. *");
      printf("\n \t ** E os mostre da seguinte forma:                *");
      printf("\n \t * a) Se i=1 mostre a, b e c em ordem crescente;  *");
      printf("\n \t * b) Se i=2 mostre a, b e c em ordem decrescente *");
      printf("\n \t * c) Se i=3 mostre o maior valor no meio.        *");
      printf("\n \t **************************************************");
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
        for (contador7 = 1; contador7 < 3; contador7++)
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
        for (contador7 = 0; contador7 < 3; contador7++)
        {
          printf("%.2f  ", vaso[contador7]);
        }
      }
      else if (i == 2)
      {
        printf("\n \t O valor de i: %i", i);
        for (contador7 = 1; contador7 < 3; contador7++)
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
        for (contador7 = 0; contador7 < 3; contador7++)
        {
          printf("%.2f  ", vaso[contador7]);
        }
      }
      else if (i == 3)
      {
        printf("\n \t O valor de i: %i", i);
        for (contador7 = 1; contador7 < 3; contador7++)
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
        aux = vaso[2];
        vaso[2] = vaso[1];
        vaso[1] = aux;
        for (contador7 = 0; contador7 < 3; contador7++)
        {
          printf("%.2f  ", vaso[contador7]);
        }
      }
      else 
      {
        printf("\n \t O valor de i: %i", i);
        printf("\n \t Valores em ordem de entrada (a, b e c):  %.2f  %.2f  %.2f", a, b, c);
      }
      pula_Linha();
      setbuf(stdin, NULL);
      printf("\n \t Repetir - 'S' ou 'N'?  ");
      scanf("%c", &deNovo);
      deNovo = toupper(deNovo);
    } while (deNovo != 'N');
    pula_Linha();
    system("pause");
  }
  // -- Fim do Exercício 7 -- //

  // -- Início do Exercício 8 -- //
  void exercicio_8()
  {
    char deNovo = 'S';
    do
    {
      float valor[10] = {0}, transferir;
      register int cont1, cont2;
      system("cls");
      printf("\n \n");
      printf("\n \t **************************************************");
      printf("\n \t ******************* Exercicio 8 ******************");
      printf("\n \t **************************************************");
      printf("\n \t ** Crie programa que receba 10 valores e imprima *");
      printf("\n \t ** em ordem crescente.                           *");
      printf("\n \t **************************************************");
      for (cont1 = 0; cont1 < 10; cont1++)
      {
        printf("\n \t Qual o valor %i? ", cont1 + 1);
        scanf("%f", &valor[cont1]);
      }
      for (cont1 = 0; cont1 < 10; cont1++)
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
      for (cont1 = 0; cont1 < 10; cont1++)
      {
        printf(" %.2f", valor[cont1]);
      }
      pula_Linha();
      setbuf(stdin, NULL);
      printf("\n \t Repetir - 'S' ou 'N'?  ");
      scanf("%c", &deNovo);
      deNovo = toupper(deNovo);
    } while (deNovo != 'N');
    pula_Linha();
    system("pause");
    return 0;
  }
  // -- Fim do Exercício 8 -- //

  // -- Início do Exercício 9 -- //
  void exercicio_9()
  {
    char deNovo9 = 'S';
    do
    {
      float quant_Combust = 0, preco_Combust = 0, dist_Percor = 0;
      float autonomia = 0, preco_Medio = 0;
      system("cls");
      printf("\n \n");
      printf("\n \t **************************************************");
      printf("\n \t ******************* Exercicio 9 ******************");
      printf("\n \t **************************************************");
      printf("\n \t ** Programa que receba valores de combustivel,  **");
      printf("\n \t ** quantidade abastecida e distancia da viagem  **");
      printf("\n \t ** e calcule o valor medio do combustivel e a   **");
      printf("\n \t ** autonomia do veiculo utilizado.              **");
      printf("\n \t **************************************************");
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
      pula_Linha();
      setbuf(stdin, NULL);
      printf("\n \t Repetir - 'S' ou 'N'?  ");
      scanf("%c", &deNovo9);
      deNovo9 = toupper(deNovo9);
    } while (deNovo9 != 'N');
    pula_Linha();
    system("pause");
  }
  // -- Fim do Exercício 9 -- //

  // -- Início do Exercício 10 -- //
  void exercicio_10()
  {
    register int contador10 = 0, cont10 = 0;
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
      printf("\n \t ***************************************************");
      printf("\n \t ****************** Exercicio 10 *******************");
      printf("\n \t ***************************************************");
      printf("\n \t ** Crie um programa que possa cadastrar um carro  *");
      printf("\n \t * com placa, modelo, ano e cor. E possa cadastrar *");
      printf("\n \t ** varios carros e mostrar todos os cadastrados.  *");
      printf("\n \t ** a) Imprimir o cadastro feito em um arquivo.    *");
      printf("\n \t ***************************************************");
      loopDez1:
        setbuf(stdin, NULL);
        printf("\n \n \t Digite a placa:  ");
        scanf("%s", &fichaCarro[contador10].placa);
        printf("\n \t Digite o modelo:  ");
        scanf("%s", &fichaCarro[contador10].modelo);
        loopDez2:
          printf("\n \t Digite o ano:  ");
          scanf("%i", &fichaCarro[contador10].ano);
        if (fichaCarro[contador10].ano < 1886) goto loopDez2;
        printf("\n \t Digite a cor:  ");
        scanf("%s", &fichaCarro[contador10].cor);
        contador10++;
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
        for (cont10 = 0; cont10 < contador10; cont10++)
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
          for (cont10 = 0; cont10 <= contador10; cont10++)
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
      printf("\n \t Opcao invalida! \n");
      printf("\n \t Tente novamente! \n \n \n");
      system("pause");
      break;
    }
  } while (opcao_Principal != 0);
  return 0;
};
// ----- Fim da Função Principal ----- //

