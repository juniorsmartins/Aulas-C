#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII
/* 
  Desafio da Semana #2
  Declare uma variável que receba a invocação da função criada acima, passando dois números quaisquer por argumento, e somando `5` ao resultado retornado da função.
*/
void pulaLinha() 
{
  printf("\n\n");
};

int somaDois(int a, int b) 
{
  int resultado = (a+b);
  return(resultado);
};

int main() 
{
  int valor1;
  int valor2;
  pulaLinha();
  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);
  pulaLinha();
  printf("Digite o segundo valor: ");
  scanf("%d", &valor2);
  pulaLinha();
  int total = somaDois(valor1, valor2);
  printf("A soma de %d com %i eh: %i", valor1, valor2, (total + 5));
  pulaLinha();
  return 0;
};



