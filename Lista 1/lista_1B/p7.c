#include <stdio.h>
#include <math.h>

int main()
{
  int x, y;
  scanf("%i", &x);
  if (x < 1)
  {
    y = x;
  }
  else if (x == 1)
  {
    y = 0;
  }
  else if (x > 1)
  {
    y = pow(x, 2);
  }
  printf("Y = %i\n", y);
}