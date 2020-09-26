#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

pulaLinha()
{
  printf("\n");
}

int main()
{
  int valor;
  int contador = 0;
  printf("\nDigite valor: ");
  scanf("%i", &valor);

    if (valor < 6) 
    {
      while (contador < 10) 
      {
        printf("\n %i x %i = %i", contador, valor, (valor * contador));
        contador++;
      }
    } else 
      { 
        do 
        {
          printf("\n %i + %i = %i", contador, valor, (contador + valor));
          contador++;
        } while (contador < 10);
      }

  pulaLinha();
  system("PAUSE");
  return (0);
}