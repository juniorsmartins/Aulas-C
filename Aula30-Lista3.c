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

int exercicio_1()
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
  return 0;
}

int exercicio_2()
{
  int entrada1 = 0;
  int entrada2 = 0;
  int resultado = 0;
  int resto_Deles = 0;
  system("cls");
  printf("*********************\n");
  printf("**** Exercicio 2 ****\n");
  printf("*********************\n");
  pula_Linha();
  printf("Escrever um algoritmo que leia valores inteiros em duas variáveis distintas.\n");
  printf("1) Se o resto da divisão da primeira pela segunda for 1, mostre a soma dessas variáveis mais o resto da divisão;\n");
  printf("2) Se o resto da divisão da primeira pela segunda for igual a três, multiplique a soma dos valores lidos pelo primeiro;\n");
  printf("3) Se o resto da divisão da primeira pela segunda for igual a quatro, divida a soma dos números lidos pelo segundo, se este for diferente de zero;\n");
  printf("4) Em qualquer outra situação, mostre o quadrado dos números lidos.\n");
  pula_Linha();
  printf("Digite o primeiro valor inteiro: ");
  scanf("%i", &entrada1);
  printf("\nDigite o segundo valor inteiro: ");
  scanf("%i", &entrada2);
  resto_Deles = (entrada1 % entrada2);
  if (resto_Deles == 1)
  {
    resultado = (entrada1 + entrada2 + resto_Deles);
    pula_Linha();
    printf("Condição 1 atendida!\n");
    printf("A soma + resto é: %i", resultado);
  } 
  else if (resto_Deles == 3)
  {
    resultado = ((entrada1 + entrada2) * entrada1);
    pula_Linha();
    printf("Condição 2 atendida!\n");
    printf("A multiplicação da soma pelo primeiro é: %i", resultado);
  }
  else if (resto_Deles == 4 && entrada2 != 0)
  {
    resultado = ((entrada1 + entrada2) / entrada2);
    pula_Linha();
    printf("Condição 3 atendida!\n");
    printf("A divisão da soma pelo segundo, se este for diferente de zero, é: %i", resultado);
  }
  else  
  {
    pula_Linha();
    printf("Condição 4 atendida!\n");
    printf("O quadrado dos números lidos é: %i e %i", entrada1 * entrada1, entrada2 * entrada2);
  }
  pula_Linha();
  system("pause");
  return 0;
}

int exercicio_3()
{
  system("cls");
  printf("*********************\n");
  printf("**** Exercicio 3 ****\n");
  printf("*********************\n");
  pula_Linha();
  printf("Escreva um algoritmo que leia três valores para os lados de um triângulo. ");
  printf("E depois diga se o triângulo é equilátero, isósceles ou escaleno.");
  pula_Linha();



  system("pause");
  return 0;
}

int exercicio_4()
{
  system("cls");
  printf("Exercício 4");
  system("pause");
  return 0;
}

int exercicio_5()
{
  system("cls");
  printf("Exercício 5");
  system("pause");
  return 0;
}

int exercicio_6()
{
  system("cls");
  printf("Exercício 6");
  system("pause");
  return 0;
}

int tchau()
{
  system("cls");
  printf("Tchau! Amiguinho.");
  pula_Linha();
  printf("'Que a Força esteja com você!', mestre Yoda.");
  pula_Linha();
  system("pause");
  return 0;
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
  return 0;
}

