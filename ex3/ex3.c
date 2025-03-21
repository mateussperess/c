#include <stdio.h>
#include <stdlib.h>

int main() {
  int* matriz[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      matriz[i][j] = malloc(sizeof(int));
      if(matriz[i][j] == NULL) {
        printf("Nao foi possivel alocar memoria! \n");
        return 1;
      }

      printf("Matriz[%i][%i]: ", i, j);
      scanf("%i", matriz[i][j]);
    }
  }
  
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%i ",* matriz[i][j]);
    }

    printf("\n");
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      free(matriz[i][j]);
    }
  }

  return 0;
}