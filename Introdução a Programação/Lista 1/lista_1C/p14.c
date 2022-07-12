<<<<<<< HEAD
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
=======
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
>>>>>>> 5d0bdbb890d000c76d25d8b10675fc5f75fca900
