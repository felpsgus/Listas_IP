#include <stdio.h>
#include <string.h>
#include <math.h>

int imprimirValor(int n, int *arr)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (i == 0)
    {
      printf("(");
    }

    printf("%d", arr[i]);

    if (i == n - 1)
    {
      printf(")\n");
    }
    else
    {
      printf(",");
    }
  }
}

int main()
{
  int i;
  char A[1000];
  char B[1000];
  char end[1];
  int numA[5] = {0, 0, 0, 0, 0};
  int numB[5] = {0, 0, 0, 0, 0};
  double frequencia;

  scanf("%[^;]s", A);
  scanf("%[;^]s", end);
  scanf("%[^\n]s", B);

  if (end[0] == ';')
  {
    for (i = 0; i < strlen(A); i++)
    {
      switch (A[i])
      {
      case 'a':
        numA[0]++;
        break;
      case 'A':
        numA[0]++;
        break;

      case 'e':
        numA[1]++;
        break;
      case 'E':
        numA[1]++;
        break;

      case 'i':
        numA[2]++;
        break;
      case 'I':
        numA[2]++;
        break;

      case 'o':
        numA[3]++;
        break;
      case 'O':
        numA[3]++;
        break;

      case 'u':
        numA[4]++;
        break;
      case 'U':
        numA[4]++;
        break;
      }
    }

    for (i = 0; i < strlen(B); i++)
    {
      switch (B[i])
      {
      case 'a':
        numB[0]++;
        break;
      case 'A':
        numB[0]++;
        break;

      case 'e':
        numB[1]++;
        break;
      case 'E':
        numB[1]++;
        break;

      case 'i':
        numB[2]++;
        break;
      case 'I':
        numB[2]++;
        break;

      case 'o':
        numB[3]++;
        break;
      case 'O':
        numB[3]++;
        break;

      case 'u':
        numB[4]++;
        break;
      case 'U':
        numB[4]++;
        break;
      }
    }
    imprimirValor(5, numA);
    imprimirValor(5, numB);
    frequencia = sqrt(pow(numA[0] - numB[0], 2) + pow(numA[1] - numB[1], 2) + pow(numA[2] - numB[2], 2) + pow(numA[3] - numB[3], 2) + pow(numA[4] - numB[4], 2));
    printf("%.2f\n", frequencia);
  }
  else
  {
    printf("FORMATO INVALIDO!\n");
  }
}