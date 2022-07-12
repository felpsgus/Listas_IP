#include <stdio.h>

int main()
{
  double MP, ML, NT, NF, presenca, nota;
  int i, matricula;

  while (scanf("%d", &matricula) != -1)
  {
    if (matricula != -1)
    {
      scanf("%lf", &MP);

      for (i = 0; i < 7; i++)
      {
        scanf("%lf", &nota);
        MP += nota;
      }

      scanf("%lf", &ML);

      for (i = 0; i < 4; i++)
      {
        scanf("%lf", &nota);
        ML += nota;
      }

      scanf("%lf", &NT);
      scanf("%lf", &presenca);

      MP /= 8;
      ML /= 5;
      NF = 0.7 * MP + 0.15 * ML + 0.15 * NT;

      if (NF >= 6 && presenca >= 96)
      {
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, NF);
      }

      if (NF >= 6 && presenca < 96)
      {
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, NF);
      }

      if (NF < 6 && presenca >= 96)
      {
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, NF);
      }

      if (NF < 6 && presenca < 96)
      {
        printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, NF);
      }
    }
  }

  return 0;
}