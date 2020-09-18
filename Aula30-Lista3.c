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
  float tri1, tri2, tri3;
  tri1 = tri2 = tri3 = 0; 
  system("cls");
  printf("*********************\n");
  printf("**** Exercicio 3 ****\n");
  printf("*********************\n");
  pula_Linha();
  printf("Escreva um algoritmo que leia três valores para os lados de um triângulo. ");
  printf("E depois diga se o triângulo é equilátero, isósceles ou escaleno.");
  pula_Linha();
  printf("Digite o primeiro lado de um triângulo: ");
  scanf("%f", &tri1);
  printf("\nDigite o segundo lado de um triângulo: ");
  scanf("%f", &tri2);
  printf("\nDigite o terceiro lado de um triângulo: ");
  scanf("%f", &tri3);
  pula_Linha();
  if (tri1 == tri2 && tri1 == tri3)
  {
    printf("\nTriângulo Equilátero - Todos os lados iguais!");
  }
  else if (tri1 != tri2 && tri1 != tri3 && tri2 != tri3)
  {
    printf("\nTriângulo Scaleno - Todos os lados diferentes!");
  }
  else
  {
    if (tri1 == tri2 && tri1 != tri3)
    {
      printf("\nTriângulo Isósceles - Dois lados iguais!");
    }
    if (tri1 == tri3 && tri1 != tri2)
    {
      printf("\nTriângulo Isósceles - Dois lados iguais!");
    }
    if (tri2 == tri3 && tri2 != tri1)
    {
      printf("\nTriângulo Isósceles - Dois lados iguais!");
    }
  }
  pula_Linha();
  system("pause");
  return 0;
}

int exercicio_4()
{
  int valor_Inteiro, valor_Resto;
  valor_Inteiro = valor_Resto = 0;
  system("cls");
  printf("*********************\n");
  printf("**** Exercicio 4 ****\n");
  printf("*********************\n");
  pula_Linha();
  printf("Escreva um algoritmo que leia um número inteiro.");
  printf("\n1) Se o número lido for positivo, escreva uma mensagem indicando se é par um ímpar;");
  printf("\n2) Se o número for negativo, escreva a seguinte mensagem 'Este número não é positivo'.");
  pula_Linha();
  printf("Digite um valor inteiro qualquer: ");
  scanf("%i", &valor_Inteiro);
  pula_Linha();
  if (valor_Inteiro >= 0)
  {
    valor_Resto = (valor_Inteiro % 2);
    if (valor_Resto == 0)
    {
      printf("O valor digitado é par!");
    }
    if (valor_Resto == 1)
    {
      printf("O valor digitado é ímpar!");
    }
  }
  else 
  { 
    if (valor_Inteiro < 0)
    {
      printf("O valor digitado não é positivo!");
    }
  }
  pula_Linha();
  system("pause");
  return 0;
}

int exercicio_5()
{
  int ano, conta1, conta2;
  ano = conta1 = conta2 = 0;
  system("cls");
  printf("*********************\n");
  printf("**** Exercicio 5 ****\n");
  printf("*********************\n");
  pula_Linha();
  printf("Elabora um algoritmo que informe se um dado ano é ou não bissexto.\n");
  printf("Obs: é bissexto se for divisível por 400 ou se for divisível por 4 e não por 100.");
  pula_Linha();
  printf("Digite um ano qualquer (ex: 1998): ");
  scanf("%i", &ano);
  pula_Linha();
  conta1 = (ano % 4);
  conta2 = (ano % 100);
  if (conta1 == 0 && conta2 != 0)
  {
    printf("Ano Bissexto!");
  }
  else
  {
    printf("Não é Bissexto!");
  }
  pula_Linha();
  system("pause");
  return 0;
}

int exercicio_6()
{
  char nome6[40];
  int dia, mes, contador1;
  dia = mes = contador1 = 0;
  system("cls");
  printf("*********************\n");
  printf("**** Exercicio 6 ****\n");
  printf("*********************\n");
  pula_Linha();
  printf("Verifique a validade de uma data de aniversário (solicite apenas o número do dia e do mês)\n.");
  printf("1- Solite o nome e a idade de duas pessoas;\n");
  printf("2- Além de falar se a data está ok, informe também o nome do mês\n.");
  printf("Dica: meses com 30 dias: abril, junho, setembro e novembro.");
  pula_Linha();
  for (contador1 = 0; contador1 < 2; contador1++) 
  {
    pula_Linha();
    printf("Qual o nome do usuário? ");
    fgets(nome6, 40, stdin);
    printf("\nQual o dia do teu aniversário? ");
    scanf("%i", &dia);
    printf("\nQual o número do mês do teu aniversário? ");
    scanf("%i", &mes);
    if (mes == 1)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Janeiro.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes == 2)
    {
      if (dia > 0 && dia < 30)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Fevereiro.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes == 3)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Março.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes == 4)
    {
      if (dia > 0 && dia < 31)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Abril.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes == 5)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Maio.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes == 6)
    {
      if (dia > 0 && dia < 31)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Junho.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes == 7)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Julho.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes == 8)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Agosto.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes == 9)
    {
      if (dia > 0 && dia < 31)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Setembro.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes == 10)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Outubro.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes == 11)
    {
      if (dia > 0 && dia < 31)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Novembro.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes == 12)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%c \n", nome6);
        printf("Aniversário no dia %i de Dezembro.", dia);
      }
      else
      {
        printf("%c \n", nome6);
        printf("Data Inválida!");
      }
    }
    else if (mes < 1 || mes > 12)
    {
      printf("%c \n", nome6);
      printf("Data Inválida!");
    }
  }
  pula_Linha();
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

