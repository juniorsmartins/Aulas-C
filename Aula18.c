#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

void pulaLinha() {
  printf("\n\n");
}

int idadeJovem, idadeIdoso, idade;
idadeJovem = 17;
idadeIdoso = 60;

int main() 
{

  printf("Digite sua idade: ");
  scanf("%d", &idade);
  pulaLinha();

  if (idade <= 17) {
    printf("Jovem!");
    pulaLinha();
  } else { 
      if (idade > 17 && idade < 60) {
        printf("Meia-idade!");
        pulaLinha();
      } else {
          if (idade >= 60) {
            printf("Idoso!");
            pulaLinha();
          }
        }
    }
  return 0;
}