#include <stdio.h>

int main()
{
  double salario, salarioFinal, horas;
  int matricula, i;
  matricula = 1;

  do
  {
    scanf("%d", &matricula);
    if (matricula != 0)
    {
      scanf("%lf %lf", &horas, &salario);
      salarioFinal = horas * salario;
      printf("%d %.2lf\n", matricula, salarioFinal);
    }
  } while (matricula != 0);
  
  return 0;
}
