#include <stdio.h>

int main()
{
  double salario_minimo, salario, imposto, imposto_normal, imposto_bruto, imposto_liquido, quantidade;
  int matricula, dependentes;
  scanf("%d %lf %d %lf %lf", &matricula, &salario_minimo, &dependentes, &salario, &imposto_normal);

  quantidade = salario / salario_minimo;

  if (quantidade > 12)
  {
    imposto_bruto = salario * 0.2;
  }

  if (quantidade > 5)
  {
    imposto_bruto = salario * 0.08;
  }

  if (quantidade <= 5)
  {
    imposto_bruto = salario * 0;
  }

  imposto_liquido = imposto_bruto - (dependentes * 300);

  imposto = imposto_liquido - ((imposto_normal / 100) * salario);

  printf("MATRICULA = %d\n", matricula);
  printf("IMPOSTO BRUTO = %.2lf\n", imposto_bruto);
  printf("IMPOSTO LIQUIDO =  %.2lf\n", imposto_liquido);
  printf("RESULTADO =  %.2lf\n", imposto);

  if (imposto > 0)
  {
    printf("IMPOSTO A PAGAR\n");
  }

  if (imposto == 0)
  {
    printf("IMPOSTO QUITADO\n");
  }

  if (imposto < 0)
  {
    printf("IMPOSTO A RECEBER\n");
  }
}