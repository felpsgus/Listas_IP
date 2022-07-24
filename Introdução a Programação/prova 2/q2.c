#include <stdio.h>

int main()
{
  int dia;
  double x = 5, i, codigo, totalvendas, valorvenda, vendasemanal, segunda = 0, terca = 0, quarta = 0, quinta = 0, sexta = 0, f1 = 0, f2 = 0, f3 = 0;
  while (x > 0)
  {
    scanf("%d", &dia);
    scanf("%lf", &totalvendas);

    if (totalvendas > 0)
    {
      for (i = 0; i < totalvendas; i++)
      {
        scanf("%lf", &valorvenda);
        scanf("%lf", &codigo);

        if (codigo == 1)
        {
          f1 += valorvenda;
        }
        else if (codigo == 2)
        {
          f2 += valorvenda;
        }
        else if (codigo == 3)
        {
          f3 += valorvenda;
        }

        switch (dia)
        {
        case 1:
          segunda += valorvenda;
          break;
        case 2:
          terca += valorvenda;
          break;
        case 3:
          quarta += valorvenda;
          break;
        case 4:
          quinta += valorvenda;
          break;
        case 5:
          sexta += valorvenda;
          break;
        }
      }
    }
    else
    {
      valorvenda = 0;
    }

    x--;
  }

  vendasemanal = segunda + terca + quarta + quinta + sexta;

  printf("Total de vendas da segunda-feira: %.2lf\n", segunda);
  printf("Total de vendas da terca-feira: %.2lf\n", terca);
  printf("Total de vendas da quarta-feira: %.2lf\n", quarta);
  printf("Total de vendas da quinta-feira: %.2lf\n", quinta);
  printf("Total de vendas da sexta-feira: %.2lf\n", sexta);
  printf("Total de vendas da semana: %.2lf\n", vendasemanal);
  printf("Total de vendas semanais do funcionario 1: %.2lf\n", f1);
  printf("Total de vendas semanais do funcionario 2: %.2lf\n", f2);
  printf("Total de vendas semanais do funcionario 3: %.2lf\n", f3);
}