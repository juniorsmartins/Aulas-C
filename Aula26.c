#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

int main()
{

  do
  {
    system("cls");
    printf("*********************\n");
    printf("*********************\n");
    printf("******  MENU  *******\n");
    printf("*********************\n");
    printf("***  Exercício 1  ***\n");
    printf("***  Exercício 2  ***\n");
    printf("***  Exercício 3  ***\n");
    printf("***  Exercício 4  ***\n");
    printf("***  Exercício 5  ***\n");
    printf("***  Exercício 6  ***\n");
    printf("***  Exercício 7  ***\n");
    printf("*****  Sair 8  ******\n");
    printf("*********************\n");
    printf("* Qual opção (1 a 8)?\n");
    int opcao = 0;
    scanf("%d", &opcao);

    switch (opcao)
    {
      case 1 :
        /* Exercício 1: faça programa que leia valor inteiro e escreva o dobro do valor */

        system("cls");

        int valor_1;
        printf("\nDigite um valor inteiro: ");
        scanf("%i", &valor_1);
        valor_1 *= 2;
        printf("\nO dobro do valor digitado é: %i", valor_1);

        system("PAUSE");

        break;
      case 2 : 
        /* Exercício 2: programa que leia dois valores inteiros e apresente-os no monitor */

        system("cls");

        int valor_2, valor_3;
        printf("\nDigite o primeiro valor inteiro: ");
        scanf("%i", &valor_2);
        printf("\nDigite o segundo valor inteiro: ");
        scanf("%i", &valor_3);
        printf("\nOs valores digitados são: %i e %i", valor_2, valor_3);

        system("PAUSE");

        break;
      case 3 : 

        /* Exercício 3: programa que leia dois valores inteiros e apresente a soma deles */

        system("cls");

        int valor_4, valor_5;
        printf("\nDigite o primeiro valor inteiro: ");
        scanf("%i", &valor_4);
        printf("\nDigite o segundo valor inteiro: ");
        scanf("%i", &valor_5);
        printf("\nA soma deles é: %i", (valor_4 + valor_5));

        system("PAUSE");

        break;
      case 4 : 

        /* Exercício 4: leia um valor inteiro qualquer e calcule e escreva o resto inteiro da divisão desse valor por três */

        system("cls");

        int valor_6;
        printf("\nDigite um valor inteiro qualquer: ");
        scanf("%i", &valor_6);
        printf("\nO resto da divisão por três é: %i", (valor_6 % 3));

        system("PAUSE");

        break;
      case 5 : 

        /* Exercício 5: leia um valor inteiro qualquer e calcule e escreva o quociente inteiro da divisão desse valor por três */

        system("cls");

        int valor_7;
        printf("\nDigite um valor inteiro qualquer: ");
        scanf("%i", &valor_7);
        printf("\nO quociente é: %i", (valor_7 / 3));

        system("PAUSE");

        break;
      case 6 : 

        /* Exercício 6: leia dois valores inteiros para as variáveis A e B, troque os valores entre elas e apresente-os */

        system("cls");

        int A, B, C;
        printf("\nDigite o valor inteiro de A: ");
        scanf("%i", &A);
        printf("\nDigite o valor inteiro de B: ");
        scanf("%i", &B);
        C = A;
        A = B;
        B = C;
        printf("\nO valor de A virou: %i", A);
        printf("\nO valor de B virou: %i", B);

        system("PAUSE");

        break;
      case 7 : 

        /* Exercício 7: calcular salário bruto (SB), sendo este a multiplicação de HT (horas trabalhadas) e VH (valor hora). */

        system("cls");

        float SB, HT, VH;
        printf("\nDigite a quantidade de horas trabalhadas: ");
        scanf("%f", &HT);
        printf("\nEntre com o valor da hora/trabalho: ");
        scanf("%f", &VH);
        SB = (HT * VH);
        printf("\nO valor do salário bruto é: %f", SB);

        system("PAUSE");

        break;
      case 8 : 

        /* Saída! */

        system("cls");
        printf("\nVolte sempre!");

        break;
      default :

        /* Opção Inválida! */

        system("cls");
        printf("\nTente novamente!");
        system("PAUSE");

        break;
    }

  } while (opcao != 8);

  return 0;
};