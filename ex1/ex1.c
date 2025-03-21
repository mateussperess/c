#include <stdio.h>
#include <stdlib.h>

void lerVetor(int* vetor, int tamanho);
void printarVetor(int* vetor, int tamanho);

int main()
{
  int tamanho;

  printf("Informe o tamanho do vetor: ");
  scanf("%i", &tamanho);

  int* vetor = malloc(tamanho * sizeof(int));

  if (vetor == NULL)
  {
    printf("Falha ao alocar memoria! \n");
    return 1;
  }

  lerVetor(vetor, tamanho);

  printf("\n Valores alocados: \n");

  printarVetor(vetor, tamanho);

  free(vetor);
  return 0;
}

void lerVetor(int* vetor, int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {
    printf("Informe o valor para a posicao [%i]: ", i);
    scanf("%i", (vetor + i));
  }
}

void printarVetor(int* vetor, int tamanho)
{
  printf("[ ");
  for (int i = 0; i < tamanho; i++)
  {
    printf("%i", *(vetor + i));

    if (i != (tamanho - 1))
    {
      printf(", ");
    }
  }
  printf(" ]\n");
}