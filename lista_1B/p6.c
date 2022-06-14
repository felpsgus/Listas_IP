#include <stdio.h>

int main() {
  double s, r;
  scanf("%lf", &s);
  if (s <= 300) {
    r = s * 1.5;
  } else {
    r = s * 1.3;
  }
  printf("SALARIO COM REAJUSTE = %.2lf\n", r);
}