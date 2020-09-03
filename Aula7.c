#include <stdio.h>
#include <stdlib.h>

int main()
{

  int num1, num2, soma, subt, divis, multip;
  printf(" Digite o primeiro valor: ");
  scanf("%i", &num1);
  printf("\n Digite o segundo valor: ");
  scanf("%i", &num2);

  soma = num1 + num2;
  subt = num1 - num2;
  divis = num1 / num2;
  multip = num1 * num2;

  printf("%i - %i - %i - %i", soma, subt, divis, multip);

  return 0;
}