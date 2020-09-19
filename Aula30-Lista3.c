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
    printf("*********************");
    pula_Linha();
    printf("Escreva um algoritmo para ler três valores inteiros e escrever na tela o maior e o menor. Considere que todos os valores são diferentes.");
    pula_Linha();
    int valor1, valor2, valor3;
    valor1 = valor2 = valor3 = 0;
    printf("Digite o primeiro valor: ");
    scanf("%i", &valor1);
    pula_Linha();
    printf("Digite o segundo valor: ");
    scanf("%i", &valor2);
    pula_Linha();
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);
    pula_Linha();
    if (valor1 != valor2 && valor1 != valor3 && valor2 != valor3)
    {
      if (valor1 > valor2 && valor1 > valor3)
      {
        printf("O maior valor: %i", valor1);
        pula_Linha();
      }
      if (valor2 > valor1 && valor2 > valor3)
      {
        printf("O maior valor: %i", valor2);
        pula_Linha();
      }
      if (valor3 > valor1 && valor3 > valor2)
      {
        printf("O maior valor: %i", valor3);
        pula_Linha();
      }
      if (valor1 < valor2 && valor1 < valor3)
      {
        printf("O menor valor: %i", valor1);
        pula_Linha();
      }
      if (valor2 < valor1 && valor2 < valor3)
      {
        printf("O menor valor: %d", valor2);
        pula_Linha();
      }
      if (valor3 < valor1 && valor3 < valor2)
      {
        printf("O menor valor: %i", valor3);
        pula_Linha();
      }
      resposta = 1;
    }
    else 
    {
      printf("Errado! Digitou valores iguais. Refaça!");
      pula_Linha();
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
  printf("*********************");
  pula_Linha();
  printf("Escrever um algoritmo que leia valores inteiros em duas variáveis distintas.\n");
  printf("1) Se o resto da divisão da primeira pela segunda for 1, mostre a soma dessas variáveis mais o resto da divisão;\n");
  printf("2) Se o resto da divisão da primeira pela segunda for igual a três, multiplique a soma dos valores lidos pelo primeiro;\n");
  printf("3) Se o resto da divisão da primeira pela segunda for igual a quatro, divida a soma dos números lidos pelo segundo, se este for diferente de zero;\n");
  printf("4) Em qualquer outra situação, mostre o quadrado dos números lidos.");
  pula_Linha();
  printf("Digite o primeiro valor inteiro: ");
  scanf("%i", &entrada1);
  pula_Linha();
  printf("Digite o segundo valor inteiro: ");
  scanf("%i", &entrada2);
  pula_Linha();
  resto_Deles = (entrada1 % entrada2);
  if (resto_Deles == 1)
  {
    resultado = (entrada1 + entrada2 + resto_Deles);
    printf("Condição 1 atendida!");
    pula_Linha();
    printf("A soma + resto é: %i", resultado);
  } 
  else if (resto_Deles == 3)
  {
    resultado = ((entrada1 + entrada2) * entrada1);
    printf("Condição 2 atendida!");
    pula_Linha();
    printf("A multiplicação da soma pelo primeiro é: %i", resultado);
  }
  else if (resto_Deles == 4 && entrada2 != 0)
  {
    resultado = ((entrada1 + entrada2) / entrada2);
    printf("Condição 3 atendida!");
    pula_Linha();
    printf("A divisão da soma pelo segundo, se este for diferente de zero, é: %i", resultado);
  }
  else  
  {
    printf("Condição 4 atendida!");
    pula_Linha();
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
  printf("*********************");
  pula_Linha();
  printf("Escreva um algoritmo que leia três valores para os lados de um triângulo. E diga se o triângulo é equilátero, isósceles ou escaleno. \n");
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
    printf("Triângulo Equilátero - Todos os lados iguais!");
  }
  else if (tri1 != tri2 && tri1 != tri3 && tri2 != tri3)
  {
    printf("Triângulo Scaleno - Todos os lados diferentes!");
  }
  else
  {
    if (tri1 == tri2 && tri1 != tri3)
    {
      printf("Triângulo Isósceles - Dois lados iguais!");
    }
    if (tri1 == tri3 && tri1 != tri2)
    {
      printf("Triângulo Isósceles - Dois lados iguais!");
    }
    if (tri2 == tri3 && tri2 != tri1)
    {
      printf("Triângulo Isósceles - Dois lados iguais!");
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
  printf("*********************");
  pula_Linha();
  printf("Escreva um algoritmo que leia um número inteiro. \n");
  printf("1- Se o número lido for positivo, escreva uma mensagem indicando se é par um ímpar; \n");
  printf("2- Se o número for negativo, escreva a seguinte mensagem: 'Este número não é positivo'.");
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
  printf("*********************");
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
  char nome_Seis[30];
  int dia, mes, contador1;
  dia = mes = contador1 = 0;
  system("cls");
  printf("*********************\n");
  printf("**** Exercicio 6 ****\n");
  printf("*********************");
  pula_Linha();
  printf("Verifique a validade de uma data de aniversário (solicite apenas o número do dia e do mês). \n");
  printf("1- Solite o nome e a idade de duas pessoas; \n");
  printf("2- Além de falar se a data está ok, informe também o nome do mês. \n");
  printf("Dica: meses com 30 dias: abril, junho, setembro e novembro.");
  for (contador1 = 0; contador1 < 2; contador1++) 
  {
    pula_Linha();
    printf("Qual o nome do usuário? ");
    scanf("%s", nome_Seis);
    printf("\nQual o dia do teu aniversário? ");
    scanf("%i", &dia);
    printf("\nQual o mês do teu aniversário (1 a 12)? ");
    scanf("%i", &mes);
    pula_Linha();
    if (mes == 1)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Janeiro.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes == 2)
    {
      if (dia > 0 && dia < 30)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Fevereiro.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes == 3)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Março.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes == 4)
    {
      if (dia > 0 && dia < 31)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Abril.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes == 5)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Maio.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes == 6)
    {
      if (dia > 0 && dia < 31)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Junho.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes == 7)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Julho.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes == 8)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Agosto.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes == 9)
    {
      if (dia > 0 && dia < 31)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Setembro.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes == 10)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Outubro.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes == 11)
    {
      if (dia > 0 && dia < 31)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Novembro.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes == 12)
    {
      if (dia > 0 && dia < 32)
      {
        printf("%s \n", nome_Seis);
        printf("Aniversário no dia %i de Dezembro.", dia);
      }
      else
      {
        printf("%s \n", nome_Seis);
        printf("Data Inválida!");
      }
    }
    else if (mes < 1 || mes > 12)
    {
      printf("%s \n", nome_Seis);
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

