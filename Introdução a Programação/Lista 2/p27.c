#include <stdio.h>
#include <math.h>

int main()
{
  int n1, n2, n3, i, k, aux;

  scanf("%d", &n1);
  scanf("%d", &n2);
  n3 = n1 + n2;

  int arrA[n1];
  int arrB[n2];
  int juncao[n3];

  for (i = 0; i < n1; i++)
  {
    scanf("%d", &arrA[i]);
  }

  for (i = 0; i < n2; i++)
  {
    scanf("%d", &arrB[i]);
  }

  for (i = 0; i < n1; i++)
  {
    juncao[i] = arrA[i];
  }

  for (i = 0; i < n2; i++)
  {
    juncao[i + n1] = arrB[i];
  }

  /*for (i = 0; i < n1; i++)
  {
    if (arrA[i] < arrB[i])
    {
      for (k = 0; k < n3; k += 2)
      {
        juncao[k] = arrA[i];
      }
    }
    else
    {
      break;
    }
  }

  for (i = 0; i < n2; i++)
  {
    if (arrB[i] < arrA[i])
    {
      for (k = 1; k < n3; k += 2)
      {
        juncao[k] = arrB[i];
      }
    }
    else
    {
      break;
    }
  }*/

  for (i = 0; i < n3; i++)
  {
    for (k = i + 1; k < n3; k++)
    {
      if (juncao[i] > juncao[k])
      {
        aux = juncao[i];
        juncao[i] = juncao[k];
        juncao[k] = aux;
      }
    }
  }

  for (i = 0; i < n3; i++)
  {
    printf("%d\n", juncao[i]);
  }
}