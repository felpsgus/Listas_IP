#include <stdio.h>
#include <math.h>

int main()
{
  int n, hipotenusa = 1, cateto1 = 1, cateto2, i, passou, k;
  scanf("%d", &n);

  for (k = 0; k < n; k++)
  {
    for (i = 0; i < hipotenusa; i++)
    {

      cateto2 = sqrt(hipotenusa * hipotenusa - cateto1 * cateto1);

      if (pow(hipotenusa, 2) == pow(cateto1, 2) + pow(cateto2, 2) && cateto2 != 0 && cateto1 < cateto2)
      {
        printf("hipotenusa = %d, catetos %d e %d\n", hipotenusa, cateto1, cateto2);
      }

      cateto1++;
    }
    hipotenusa++;
    cateto1 = 1;
  }

  return 0;
}