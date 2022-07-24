#include <stdio.h>

int main()
{
  double numMatricula, hr, salario, filhos, salarioFamilia;
  scanf("%lf %lf %lf %lf %lf", &numMatricula, &hr, &salario, &filhos, &salarioFamilia);

  salario = (salario * hr) + (salarioFamilia * filhos);
  printf("MATRICULA DO FUNCIONARIO = %.0lf\nSALARIO TOTAL = %.2lf\n", numMatricula, salario);
}