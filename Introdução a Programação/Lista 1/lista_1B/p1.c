#include <stdio.h>

int main()
{
  double n1, n2, n3, m;
  scanf("%lf %lf %lf", &n1, &n2, &n3);
  m = (n1 + n2 + n3) / 3;
  if (m >= 6)
  {
    printf("MEDIA = %.2lf\n", m);
    printf("APROVADO\n");
  }
  else
  {
    printf("MEDIA = %.2lf\n", m);
    printf("REPROVADO\n");
  }
}