#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

void pulaLinha()
{
  printf("\n");
}

int main ()
{
  printf("Vídeo-aula no Youtube - Canal eXcript")
  int contador = 0;
  int valDigitado = 0;
  pulaLinha();
  printf("Digite um valor inteiro: ");
  scanf("%i", &valDigitado);
  while (contador <= valDigitado)
  {
    printf("%i x %i = %i", contador, valDigitado, contador * valDigitado);
    contador++;
    pulaLinha();
  }
  return 0;
}
