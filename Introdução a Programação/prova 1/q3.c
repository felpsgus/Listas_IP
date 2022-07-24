#include <stdio.h>
#include <stdlib.h>

int main()
{
  int identificador1, dia1, mes1, ano1;
  int identificador2, dia2, mes2, ano2;
  int mv = 0;
  scanf("%d %d %d %d", &identificador1, &dia1, &mes1, &ano1);
  scanf("%d %d %d %d", &identificador2, &dia2, &mes2, &ano2);

  if (ano1 < ano2)
  {
    mv = 1;
  }

  if (ano1 > ano2)
  {
    mv = 2;
  }

  if (ano1 == ano2)
  {
    if (mes1 < mes2)
    {
      mv = 1;
    }

    if (mes1 > mes2)
    {
      mv = 2;
    }

    if (mes1 == mes2)
    {
      if (dia1 < dia2)
      {
        mv = 1;
      }

      if (dia1 > dia2)
      {
        mv = 2;
      }

      if (dia1 == dia2)
      {
        mv = 0;
      }
    }
  }

  if (mv == 0)
  {
    printf("Ambos possuem a mesma idade\n");
  }
  else
  {
    printf("O mais velho e: %d\n", mv);
  }
}