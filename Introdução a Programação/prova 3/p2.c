#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, n, segunda = 0, primeira = 0, aux1, aux2 = -1;
  double soma = 0, media = 0;
  int vetor[1000];

  scanf("%d", &n);
  if (n <= 5)
  {
    printf("QUANTIDADE DE ELEMENTOS INVALIDOS!\n");
    return 0;
  }

  for (i = 0; i < n; i++)
  {
    scanf("%d", &vetor[i]);
    soma += vetor[i];
  }

  media = soma / n;
  aux1 = n / 2 - 1;

  if (n % 2 != 0)
  {
    aux2 = n / 2;
  }

  for (i = 0; i < n; i++)
  {
    if (vetor[i] > media)
    {
      if (i > aux1 && i != aux2)
      {
        segunda++;
      }
      if (i <= aux1)
      {
        primeira++;
      }
    }
  }

  if (primeira > segunda)
  {
    printf("%.2lf %d %d PRIMEIRA METADE\n", media, primeira, segunda);
  }
  else if (primeira < segunda)
  {
    printf("%.2lf %d %d SEGUNDA METADE\n", media, primeira, segunda);
  }
  else
  {
    printf("%.2lf %d %d EMPATE\n", media, primeira, segunda);
  }
}