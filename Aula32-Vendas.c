#include <stdio.h> // biblioteca padrão de entrada e saída e de definições de constantes, variáveis e tipos.
#include <stdlib.h> // biblioteca padrão de alocação de memória, controle de processos e conversões, entre outros. 
#include <ctype.h> // biblioteca para classificar caracteres ASCII

/*
  Linguagem de Programação C
  Software de vendas para aprendizagem prática
*/

int menu1_Principal()
{
  system("cls");
  int opcao = 0;
  printf("******************************\n");
  printf("******************************\n");
  printf("********  SOFTWARE X  ********\n");
  printf("******************************\n");
  printf("******  Menu Principal  ******\n");
  printf("******************************\n");
  printf("*****     Vender - 1     *****\n");
  printf("*****    Consultar - 2   *****\n");
  printf("*****    Cadastrar - 3   *****\n");
  printf("*****     Alterar - 4    *****\n");
  printf("*****     Excluir - 5    *****\n");
  printf("*****     Relatar - 6    *****\n");
  printf("*****      Sair - 0      *****\n");
  printf("******************************\n");
  printf("******************************\n");
  printf("* Selecione opção (de 0 a 6)? \n");
  scanf("%i", &opcao);
  return (opcao);
}



int main ()
{
  int menu1_Opcao = 0;
  do
  {
    system("cls");
    int menu1_Opcao = menu1_Principal();




  } while (menu1_Opcao != 0);
  system("pause");
  return 0;
}
