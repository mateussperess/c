#include <stdio.h>
#include <stdlib.h>

int main() {
  int* numero_inteiro = malloc(1 * (sizeof(int)));

  if(numero_inteiro == NULL) {
    printf("Nao foi possivel alocar memoria para o numero!");
    return 1;
  }

  * numero_inteiro = 10;
  printf("Numero antes da modificacao: \n");
  printf("%i \n", * numero_inteiro);

  int* ponteiro = numero_inteiro;

  int** ponteiro_ponteiro = &ponteiro; // & -> endereço de (nesse caso, endereço da variável ponteiro)

  ** ponteiro_ponteiro = 25;
  printf("Numero apos a modificacao do ponteiro do ponteiro: \n");
  printf("%i \n", * numero_inteiro);

  return 0;
}