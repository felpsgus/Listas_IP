#include <stdio.h>
#include <math.h>

int main()
{
  int a, m4, m100, m400;
  scanf("%d", &a);
  m4 = a % 4;
  m100 = a % 100;
  m400 = a % 400;
  if (a > 1582 && m4 == 0 && m100 != 0 || m400 == 0)
  {
    printf("ANO BISSEXTO\n");
  }
  else
  {
    printf("ANO NAO BISSEXTO\n");
  }
}