#include <stdio.h>

int hifen(int o, int j)
{
  if (j < o - 1)
  {
    printf("-");
  }
  else
  {
    printf("\n");
  }
}

int main()
{
  int m, n, o, i, j, x, y;
  scanf("%d %d", &m, &n);

  x = 2;
  y = 1;
  o = 1;

  for (i = 1; i < m; i++)
  {

    for (j = 0; j < o; j++)
    {

      printf("(%d,%d)", x, y);
      hifen(o, j);
      y++;
    }

    if (o != n)
    {
      o++;
    }

    x++;
    y = 1;
  }

  return 0;
}