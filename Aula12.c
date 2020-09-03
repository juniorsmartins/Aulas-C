#include <stdio.h>
#include <stdlib.h>

// Modificadores do Tipo de Acesso - const

void sp_to_dash(const char *str);

void main(void)
{
  sp_to_dash("Isso é um teste!");
}

void sp_to_dash(const char *str)
{
  while(*str) {
    if(*str == ' ') printf("%c", '-');
    else printf("%c", *str);
    str++;
  }
}