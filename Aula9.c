#include <stdio.h>
#include <stdlib.h>
#define PRECO 1.99

int main()
{

  int pera = 3;
  char qualidade = 'A';
  float peso = 2.5;

  printf("Aula sobre tipos de carateres\n\n");
  printf("Existem %i peras de qualidade %c \n", pera, qualidade);
  printf("Pesam %.2f quilos.", peso);
  printf("\nO preço por quilo é %.2f e o total é %.2f", PRECO, peso * PRECO);


  return 0;
}