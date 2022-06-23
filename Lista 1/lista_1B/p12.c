#include <stdio.h>

int main()
{
  int n, dia, mes, ano;
  scanf("%d", &n);
  dia = (n - (n % 1000000)) / 1000000;
  mes = ((n % 1000000) - (n % 10000)) / 10000;
  ano = n % 10000;

  switch (mes)
  {
  case 12:
    if (dia <= 31)
    {
      printf("%d de dezembro de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;

  case 11:
    if (dia <= 30)
    {
      printf("%d de novembro de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;

  case 10:
    if (dia <= 31)
    {
      printf("%d de outubro de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;

  case 9:
    if (dia <= 30)
    {
      printf("%d de setembro de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;

  case 8:
    if (dia <= 31)
    {
      printf("%d de agosto de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;

  case 7:
    if (dia <= 31)
    {
      printf("%d de julho de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;

  case 6:
    if (dia <= 30)
    {
      printf("%d de junho de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;

  case 5:
    if (dia <= 31)
    {
      printf("%d de maio de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;

  case 4:
    if (dia <= 30)
    {
      printf("%d de abril de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;

  case 3:
    if (dia <= 31)
    {
      printf("%d de março de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;

  case 2:
    if (dia <= 29)
    {
      printf("%d de fevereiro de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;

  case 1:
    if (dia <= 31)
    {
      printf("%d de janeiro de %d\n", dia, ano);
    }
    else
    {
      printf("Data invalida!\n");
    }
    break;
  }
}