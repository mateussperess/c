#include <stdio.h>
#include <stdlib.h>

int *aloca_memoria(int tamanho);

int main()
{
  int *vetor = aloca_memoria(5);

  if (vetor == NULL)
  {
    printf("Nao foi possivel alocar memoria dinamicamente!");
    return 1;
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Vetor[%i]: ", i);
    scanf("%i", &vetor[i]);
  }

  printf("Vetor preenchido: \n");
  printf("[ ");
  for (int i = 0; i < 5; i++)
  {
    printf("%i", vetor[i]);
    if(i != 4) {
      printf(", ");
    }
  }
  printf(" ]");
  
  free(vetor);
  return 0;
}

int *aloca_memoria(int tamanho)
{
  int *vetor = malloc(tamanho * sizeof(int));

  if (vetor == NULL)
  {
    printf("Nao foi possivel alocar memoria dinamicamente!\n");
    return NULL; // Retorna NULL em caso de erro
  }

  return vetor;
}