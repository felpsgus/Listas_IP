#include <stdio.h>

int main()
{
  double salario, salarioFinal, matricula, horas;
  int i;
  matricula = 1;

  for (i = 0; i < matricula; i++)
  {
    scanf("%lf", &matricula);
    if (matricula != 0)
    {
      scanf("%lf %lf", &horas, &salario);
      salarioFinal = horas * salario;
      printf("%.0lf %.2lf\n", matricula, salarioFinal);
    }
  }
  return 0;
}