#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

int menu_principal()
{
  system("cls");
  printf("*********************\n");
  printf("*********************\n");
  printf("******  MENU  *******\n");
  printf("*********************\n");
  printf("***  Exercicio 1  ***\n");
  printf("***  Exercicio 2  ***\n");
  printf("***  Exercicio 3  ***\n");
  printf("***  Exercicio 4  ***\n");
  printf("***  Exercicio 5  ***\n");
  printf("***  Exercicio 6  ***\n");
  printf("***  Exercicio 7  ***\n");
  printf("*****  Sair 8  ******\n");
  printf("*********************\n");
  printf("* Qual opcao (1 a 8)?");
  int opcao = 0;
  scanf("%d", &opcao);
  return (opcao);
}

void exercicio_n1()
{
  system("cls");

  int valor_1;
  printf("\n Digite um valor inteiro: ");
  scanf("%i", &valor_1);
  valor_1 *= 2;
  printf("\n O dobro do valor digitado eh: %i \n \n", valor_1);

  system("PAUSE");
}

void exercicio_n2()
{
  system("cls");

  int valor_2, valor_3;
  printf("\n Digite o primeiro valor inteiro: ");
  scanf("%i", &valor_2);
  printf("\n Digite o segundo valor inteiro: ");
  scanf("%i", &valor_3);
  printf("\n Os valores digitados sao: %i e %i \n \n", valor_2, valor_3);

  system("PAUSE");
}

void exercicio_n3()
{
  system("cls");

  int valor_4, valor_5;
  printf("\n Digite o primeiro valor inteiro: ");
  scanf("%i", &valor_4);
  printf("\n Digite o segundo valor inteiro: ");
  scanf("%i", &valor_5);
  printf("\n A soma deles eh: %i \n \n", (valor_4 + valor_5));

  system("PAUSE");
}

void exercicio_n4()
{
  system("cls");

  int valor_6;
  printf("\n Digite um valor inteiro qualquer: ");
  scanf("%i", &valor_6);
  printf("\n O resto da divisao por tres eh: %i \n \n", (valor_6 % 3));

  system("PAUSE");
}

void exercicio_n5()
{
  system("cls");

  int valor_7;
  printf("\n Digite um valor inteiro qualquer: ");
  scanf("%i", &valor_7);
  printf("\n O quociente da divisao por tres eh: %i \n \n", (valor_7 / 3));

  system("PAUSE");
}

void exercicio_n6()
{
  system("cls");

  int A, B, C;
  printf("\n Digite o valor inteiro de A: ");
  scanf("%i", &A);
  printf("\n Digite o valor inteiro de B: ");
  scanf("%i", &B);
  C = A;
  A = B;
  B = C;
  printf("\n O valor de A virou: %i \n", A);
  printf("\n O valor de B virou: %i \n \n", B);

  system("PAUSE");
}

void exercicio_n7()
{
  system("cls");

  float SB, HT, VH;
  printf("\n Digite a quantidade de horas trabalhadas: ");
  scanf("%f", &HT);
  printf("\n Entre com o valor da hora/trabalho: ");
  scanf("%f", &VH);
  SB = (HT * VH);
  printf("\n O valor do salario bruto eh: %.2f \n \n", SB);

  system("PAUSE");
}



int main()
{
  int opcao_do_menu;
  do
  {
    opcao_do_menu = menu_principal();
    switch (opcao_do_menu)
    {
      case 1 :
        /* Exercício 1: faça programa que leia valor inteiro e escreva o dobro do valor */
        exercicio_n1();
        break;

      case 2 : 
        /* Exercício 2: programa que leia dois valores inteiros e apresente-os no monitor */
        exercicio_n2();
        break;

      case 3 : 
        /* Exercício 3: programa que leia dois valores inteiros e apresente a soma deles */
        exercicio_n3();
        break;

      case 4 : 
        /* Exercício 4: leia um valor inteiro qualquer e calcule e escreva o resto inteiro da divisão desse valor por três */
        exercicio_n4();
        break;

      case 5 : 
        /* Exercício 5: leia um valor inteiro qualquer e calcule e escreva o quociente inteiro da divisão desse valor por três */
        exercicio_n5();
        break;

      case 6 : 
        /* Exercício 6: leia dois valores inteiros para as variáveis A e B, troque os valores entre elas e apresente-os */
        exercicio_n6();
        break;

      case 7 : 
        /* Exercício 7: calcular salário bruto (SB), sendo este a multiplicação de HT (horas trabalhadas) e VH (valor hora). */
        exercicio_n7();
        break;

      case 8 : 
        /* Saída! */
        system("cls");
        printf("\n Volte sempre! \n \n");
        break;

      default :
        /* Opção Inválida! */
        system("cls");
        printf("\n Tente novamente! \n \n");
        system("PAUSE");
        break;
    }
  } while (opcao_do_menu != 8);
  return 0;
};