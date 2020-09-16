#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
#include <locale.h> // biblioteca para permitir caracteres linguísticos

void pula_Linha()
{ printf("\n\n"); }

int menu_Principal()
{
  system("cls");
  printf("*********************\n");
  printf("****** Lista 3 ******\n");
  printf("*********************\n");
  printf("******  MENU  *******\n");
  printf("*********************\n");
  printf("***  Exercicio 1  ***\n");
  printf("***  Exercicio 2  ***\n");
  printf("***  Exercicio 3  ***\n");
  printf("***  Exercicio 4  ***\n");
  printf("***  Exercicio 5  ***\n");
  printf("***  Exercicio 6  ***\n");
  printf("*****  Sair 7  ******\n");
  printf("*********************\n");
  printf("* Qual opcao (1 a 7)? ");
  int opcao = 0;
  scanf("%i", &opcao);
  return(opcao);
}

void exercicio_1()
{
  int resposta = 0;
  do
  {
    system("cls");
    printf("*********************\n");
    printf("**** Exercicio 1 ****\n");
    printf("*********************\n");
    pula_Linha();
    printf("Escreva um algoritmo para ler três valores inteiros e escrever na tela o maior e o menor. Considere que todos os valores são diferentes.");
    pula_Linha();
    int valor1, valor2, valor3;
    valor1 = valor2 = valor3 = 0;
    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    printf("\nDigite o segundo valor: ");
    scanf("%i", &valor2);
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &valor3);
    if (valor1 != valor2 && valor1 != valor3 && valor2 != valor3)
    {
      if (valor1 > valor2 && valor1 > valor3)
      {
        pula_Linha();
        printf("O maior valor: %i", valor1);
      }
      if (valor2 > valor1 && valor2 > valor3)
      {
        pula_Linha();
        printf("O maior valor: %i", valor2);
      }
      if (valor3 > valor1 && valor3 > valor2)
      {
        pula_Linha();
        printf("O maior valor: %i", valor3);
      }
      if (valor1 < valor2 && valor1 < valor3)
      {
        pula_Linha();
        printf("O menor valor: %i", valor1);
      }
      if (valor2 < valor1 && valor2 < valor3)
      {
        pula_Linha();
        printf("O menor valor: %d", valor2);
      }
      if (valor3 < valor1 && valor3 < valor2)
      {
        pula_Linha();
        printf("O menor valor: %i", valor3);
      }
      resposta = 1;
    }
    else 
    {
      pula_Linha();
      printf("Errado! Digitou valores iguais. Refaça!");
      resposta = 2;
    }
  } while (resposta != 1);
  pula_Linha();
  system("pause");
  return (0);
}

void exercicio_2()
{
  system("cls");
  printf("Exercício 2");
  system("pause");
  return (0);
}

void exercicio_3()
{
  system("cls");
  printf("Exercício 3");
  system("pause");
  return (0);
}

void exercicio_4()
{
  system("cls");
  printf("Exercício 4");
  system("pause");
  return (0);
}

void exercicio_5()
{
  system("cls");
  printf("Exercício 5");
  system("pause");
  return (0);
}

void exercicio_6()
{
  system("cls");
  printf("Exercício 6");
  system("pause");
  return (0);
}

void tchau()
{
  system("cls");
  printf("Tchau! Amiguinho.");
  pula_Linha();
  printf("'Que a Força esteja com você!', mestre Yoda.");
  pula_Linha();
  system("pause");
  return (0);
}



int main()
{
  setlocale(LC_ALL, "Portuguese_Brazil");
  int opcao_Escolhida = 0;
  do
  {
    system("cls");
    opcao_Escolhida = menu_Principal();
    switch (opcao_Escolhida)
    {
      case 1: 
        exercicio_1();
      break;

      case 2: 
        exercicio_2();
      break;

      case 3: 
        exercicio_3();
      break;

      case 4: 
        exercicio_4();
      break;

      case 5: 
        exercicio_5();
      break;

      case 6: 
        exercicio_6();
      break;

      case 7: 
        tchau();
      break;

      default:
        system("cls");
        printf("Opção Inválida!");
        pula_Linha();
        printf("Tente Novamente!");
        pula_Linha();
        system("pause");
    }
  } while (opcao_Escolhida != 7);
  return (0);
}

