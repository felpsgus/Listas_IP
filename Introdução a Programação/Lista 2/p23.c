#include <stdio.h>
#include <string.h>
#include <math.h>

int imprimirValor(int n, int arr[n])
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

int letra(char x)
{
  switch (x)
  {
  case 'a':
    return 1;
  case 'A':
    return 1;
  case 'e':
    return 2;
  case 'E':
    return 2;
  case 'i':
    return 3;
  case 'I':
    return 3;
  case 'o':
    return 4;
  case 'O':
    return 4;
  case 'u':
    return 5;
  case 'U':
    return 5;
  }

  return 0;
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
  scanf("%[^.\n]s", B);

  if (end[0] == ';')
  {
    for (i = 0; i < strlen(A); i++)
    {
      switch (letra(A[i]))
      {
      case 1:
        numA[0]++;
        break;

      case 2:
        numA[1]++;
        break;

      case 3:
        numA[2]++;
        break;

      case 4:
        numA[3]++;
        break;

      case 5:
        numA[4]++;
        break;
      }
    }

    for (i = 0; i < strlen(B); i++)
    {
      switch (letra(B[i]))
      {
      case 1:
        numB[0]++;
        break;
      case 2:
        numB[1]++;
        break;
      case 3:
        numB[2]++;
        break;

      case 4:
        numB[3]++;
        break;
      case 5:
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