#include <stdio.h>

int letra(char x)
{
  char letras1[13] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
  // char letras2[13] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  int i;

  for (i = 0; i < 13; i++)
  {
    if (x == letras1[i])
    {
      return 1;
    }
  }

  return 0;
}

int main()
{
  int n, grau, ano, sala, andar, bloco;
  char inicialnome;

  scanf("%d", &n);

  while (n != 0)
  {
    scanf("%d %d %c", &grau, &ano, &inicialnome);

    if (grau == 1 && ano <= 6)
    {
      bloco = 1;

      switch (ano)
      {
      case 1:
        andar = 1;
        if (letra(inicialnome) == 1)
        {
          sala = 1;
        }
        else
        {
          sala = 2;
        }
        break;
      case 2:
        andar = 1;
        if (letra(inicialnome) == 1)
        {
          sala = 3;
        }
        else
        {
          sala = 4;
        }
        break;
      case 3:
        andar = 2;
        if (letra(inicialnome) == 1)
        {
          sala = 1;
        }
        else
        {
          sala = 2;
        }
        break;
      case 4:
        andar = 2;
        if (letra(inicialnome) == 1)
        {
          sala = 3;
        }
        else
        {
          sala = 4;
        }
        break;
      case 5:

        andar = 3;
        if (letra(inicialnome) == 1)
        {
          sala = 1;
        }
        else
        {
          sala = 2;
        }
        break;
      case 6:
        andar = 3;
        if (letra(inicialnome) == 1)
        {
          sala = 3;
        }
        else
        {
          sala = 4;
        }
        break;
      }
    }
    else
    {
      bloco = 2;
      switch (ano)
      {
      case 7:
        andar = 1;
        if (letra(inicialnome) == 1)
        {
          sala = 1;
        }
        else
        {
          sala = 2;
        }
        break;
      case 8:
        andar = 1;
        if (letra(inicialnome) == 1)
        {
          sala = 3;
        }
        else
        {
          sala = 4;
        }
        break;
      case 9:
        andar = 2;
        if (letra(inicialnome) == 1)
        {
          sala = 1;
        }
        else
        {
          sala = 2;
        }
        break;
      case 1:
        andar = 2;
        if (letra(inicialnome) == 1)
        {
          sala = 3;
        }
        else
        {
          sala = 4;
        }
        break;
      case 2:
        andar = 3;
        if (letra(inicialnome) == 1)
        {
          sala = 1;
        }
        else
        {
          sala = 2;
        }
        break;
      case 3:
        andar = 3;
        if (letra(inicialnome) == 1)
        {
          sala = 3;
        }
        else
        {
          sala = 4;
        }
        break;
      }
    }

    printf("Bem vindo(a) a Escola! Suas aulas serao na sala %d do andar %d do bloco %d.\n", sala, andar, bloco);

    n--;
  }
}