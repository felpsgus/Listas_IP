#include <stdio.h>

int main()
{
  double nascidas, sexo, meses, mortos = 0, masculino = 0, menos2anos = 0;
  double porcentagemMorte, porcentagemMasculino, porcentagem2anos;

  scanf("%lf", &nascidas);

  while (scanf("%lf %lf", &sexo, &meses) != EOF)
  {
    mortos++;

    if (sexo == 1)
    {
      masculino++;
    }

    if (meses <= 24)
    {
      menos2anos++;
    }
  }

  porcentagemMorte = (mortos * 100) / nascidas;
  porcentagemMasculino = (masculino * 100) / nascidas;
  porcentagem2anos = (menos2anos * 100) / nascidas;

  printf("PORCENTAGEM DE MORTOS = %.2lf\n", porcentagemMorte);
  printf("PORCENTAGEM DE MASCULINOS MORTOS = %.2lf\n", porcentagemMasculino);
  printf("PORCENTAGEM DE ATE 24 MESES = %.2lf\n", porcentagem2anos);
}