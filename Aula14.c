#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Aula - Tomada de decisão if + toupper

int main()
{
  char letra;
  printf("\tDigite uma letra minúscula: ");
  scanf("%c", &letra);

  if(letra >= 'a') 
  {
    printf("\tA letra digitada foi: %c", toupper( letra ) );
  }

  return 0;
}