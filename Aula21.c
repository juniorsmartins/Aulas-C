#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

/* 
  Desafio da Semana #2
  
  Crie uma função com as seguintes características:
  
  1. A função deve receber 3 argumentos;
  2. Se qualquer um dos três argumentos não estiverem preenchidos, a função deve retornar a string:
    Preencha todos os valores corretamente!
  3. O retorno da função deve ser a multiplicação dos 3 argumentos, somando `2` ao resultado da multiplicação.
*/

char pulaLinha() {
  printf("\n\n");
};

int fMultipli(int para1, int para2, int para3) {
  if (para1 == 0 || para2 == 0 || para3 == 0) {
    pulaLinha();
    printf("Preencha todos os valores corretamente!");
    pulaLinha();
    return 0;
  } else {
      int multipli = (para1 * para2 * para3 + 2);
      return (multipli);
    }
};

int main() {

  int valor1, valor2, valor3;

  pulaLinha();
  printf("\tValor 1: ");
  scanf("%d", &valor1);
  pulaLinha();

  printf("\tValor 2: ");
  scanf("%d", &valor1);
  pulaLinha();

  printf("\tValor 3: ");
  scanf("%i", &valor1);
  pulaLinha();

  int respostaM = fMultipli(valor1, valor2, valor3);

  printf("O resultado foi: %i", respostaM);
  pulaLinha();

  return 0;
};

