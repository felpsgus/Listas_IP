#include <stdio.h>
#include <stdlib.h>

int i, k;

int main()
{
  int n, distancia = 0;
  int matriz[6][6] = {{0, 63, 210, 190, -1, 190},
                      {63, 0, 160, 150, 95, 10},
                      {210, 160, 0, 10, 1, 10},
                      {190, 150, 10, 0, 10, 20},
                      {10, 95, 7, 21, 0, 80},
                      {190, 2, -1, 41, 80, 0}};

  scanf("%d", &n);
  int vetor[n];
  for (i = 0; i < n; i++)
  {
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < n - 1; i++)
  {
    if (matriz[vetor[i]][vetor[i + 1]] == -1)
    {
      printf("rota invalida!\n");
      return 0;
    }

    distancia += matriz[vetor[i]][vetor[i + 1]];
  }

  printf("%d\n", distancia);
}