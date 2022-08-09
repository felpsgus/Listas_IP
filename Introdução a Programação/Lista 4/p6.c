#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, k, j = 0, l = 0, binario;

  double matriz[2][2];
  double multiplicacao[2][2];

  for (i = 0; i < 2; i++)
  {
    for (k = 0; k < 2; k++)
    {
      scanf("%lf", &matriz[i][k]);
      multiplicacao[i][k] = 0;
    }
  }

  for (i = 0; i < 2; i++)
  {
    for (k = 0; k < 2; k++)
    {
      for (j = 0; j < 2; j++)
      {
        multiplicacao[i][k] += matriz[i][j] * matriz[j][k];
      }
      printf("%.3lf ", multiplicacao[i][k]);
    }
    printf("\n");
  }
}