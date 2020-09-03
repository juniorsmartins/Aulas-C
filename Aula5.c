#include <stdio.h>
#include <stdlib.h>

int main() {

  int num1, num2;
  num1 = 10;
  num2 = 20;

  int soma = num1 + num2;
  printf("Resultado da soma: %i\n", soma);

  int num3, num4;
  num3 = 12;
  num4 = 3;

  int resultado = num3 / num4;
  printf("Resultado da divisão inteira: %d\n", resultado);

  float num5, num6;
  num5 = 26.6;
  num6 = 3;

  float result = num5 / num6;
  printf("Resultado da divisão float: %f\n", result);

  int num7, num8;
  num7 = 10;
  num8 = 2;

  int total = num7 - num8;
  printf("Resultado da subtração: %i\n", total);

}
