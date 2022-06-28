#include <stdio.h>

int main()
{
  double valor1, valor2, linhas, razao, soma, subtracao, multiplicacao, divisao;
  scanf("%lf %lf %lf %lf", &valor1, &valor2, &linhas, &razao);

  int i;
  printf("Tabuada de soma:\n");
  for (i = 0; i < linhas; i++)
  {
    soma = valor1 + valor2;
    printf("%.2lf + %.2lf = %.2lf\n", valor1, valor2, soma);
    valor2 += razao;
  }

  valor2 = valor2 - (razao * linhas);

  printf("Tabuada de subtracao:\n");
  for (i = 0; i < linhas; i++)
  {
    subtracao = valor1 - valor2;
    printf("%.2lf - %.2lf = %.2lf\n", valor1, valor2, subtracao);
    valor2 += razao;
  }

  valor2 = valor2 - (razao * linhas);

  printf("Tabuada de multiplicacao:\n");
  for (i = 0; i < linhas; i++)
  {
    multiplicacao = valor1 * valor2;
    printf("%.2lf x %.2lf = %.2lf\n", valor1, valor2, multiplicacao);
    valor2 += razao;
  }

  valor2 = valor2 - (razao * linhas);

  printf("Tabuada de divisao:\n");
  for (i = 0; i < linhas; i++)
  {
    divisao = valor1 / valor2;
    printf("%.2lf / %.2lf = %.2lf\n", valor1, valor2, divisao);
    valor2 += razao;
  }
}