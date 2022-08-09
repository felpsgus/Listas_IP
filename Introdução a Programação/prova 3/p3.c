#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, k, n, aux, index = 0;
  int vetor[100000];

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < n; i++)
  {
    for (k = i + 1; k < n; k++)
    {
      if (vetor[i] > vetor[k])
      {
        aux = vetor[i];
        vetor[i] = vetor[k];
        vetor[k] = aux;
        if (vetor[i] < 0)
        {
          index = i;
        }
      }
    }
  }

  for (i = 0; i < n; i++)
  {
    for (k = i + 1; k < n; k++)
    {
      if (vetor[i] < vetor[k] && vetor[k] < 0)
      {
        aux = vetor[i];
        vetor[i] = vetor[k];
        vetor[k] = aux;
      }
    }
    printf("%d\n", vetor[i]);
  }
}