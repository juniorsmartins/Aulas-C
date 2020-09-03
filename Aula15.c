#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  float nota;
  printf("Digite sua nota de zero a 10: ");
  scanf("%f", &nota);
  if (nota>=7 && nota<=10)
  {
    printf('Você foi aprovado!');
  } else if (nota>=0 && nota<7)
  {
    printf("Você foi reprovado!");
  } else 
  {
    printf("Nota fora do padrão!");
  }
  return 0;
}