#include <stdio.h>

int main()
{
  int numero, i, ordenada = 0;
  double numero1 = 0.0, numero2;

  do
  {
    ordenada = 0;
    numero1 = 0;
    scanf("%d", &numero);
    if (numero != 0)
    {
      for (i = 0; i < numero; i++)
      {
        scanf("%lf", &numero2);
        if (numero1 < numero2)
        {
          numero1 = numero2;
          ordenada += 1;
        }
        else
        {
          numero1 = numero2;
        }
      }

      if (ordenada == numero)
      {
        printf("ORDENADA\n");
      }
      else
      {
        printf("DESORDENADA\n");
      }
    }
  } while (numero != 0);
}