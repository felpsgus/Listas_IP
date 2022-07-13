#include <stdio.h>

int repetiu(int a, int n, int arr[n])
{
  int k, i, repetiu = 0;
  for (i = 0; i < n; i++)
  {
    if (arr[i] == a)
    {
      repetiu++;
    }
  }

  return repetiu;
}

int main()
{
  int i, k, n, repeticoes, maisRepeticoes = 0, valorMaisRepetido;
  scanf("%d", &n);

  int A[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }

  for (i = 0; i < n; i++)
  {
    repeticoes = repetiu(A[i], n, A);

    if (repeticoes > maisRepeticoes)
    {
      maisRepeticoes = repeticoes;
      valorMaisRepetido = A[i];
    }
  }

  printf("%d\n%d\n", valorMaisRepetido, maisRepeticoes);
}