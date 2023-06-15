#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void  gerarNumerosAleatorios(int numeros[], int tamanho, int min, int max)
{
  int i, j, num;
  int range = max - min + 1;
  int *valoresPossiveis = (int *)malloc(range * sizeof(int));

  for (i = 0; i < range; i++)
  {
    valoresPossiveis[i] = min + i;
  }

  for (i = 0; i < tamanho; i++)
  {
    j = rand() % range;
    num = valoresPossiveis[j];
    numeros[i] = num;

    valoresPossiveis[j] = valoresPossiveis[range - 1];
    range--;
  }

  free(valoresPossiveis);
}

int main() {
  int numeros[7];
  int i;

  srand(time(NULL));

  gerarNumerosAleatorios(numeros, 5, 1, 50);
  gerarNumerosAleatorios(&numeros[5], 2, 1, 12);

  for (i = 0; i < 5; i++)
  {
    printf("-");
    printf("%d", numeros[i]);
  }
  printf(" | ");
  for (i = 5; i < 7; i++)
  {
    printf("-");
    printf("%d", numeros[i]);
  }

  printf("\n");
}