#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

int pulaLinha() {
  printf("\n\n");
}

int main() {
  float nota1;
  float nota2;
  float media;

  pulaLinha();
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  pulaLinha();
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  pulaLinha();
  media = ((nota1 + nota2) / 2);
  printf("O resultado: %f", media);
  pulaLinha();

  if (media < 7) {
    printf("Reprovado!");
  } else {
          if (media >= 7 && media < 9) {
            printf("Aprovado!"); 
          } else {
              if (media >= 9 || media == 10) {
                printf("Aprovado com louvor!");
              }
            }
    }
  pulaLinha();
  return 0;
}