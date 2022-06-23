#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, c, d, u, r1000, r100, r10, ordem;
    ordem = 0;
    scanf("%d", &n);

    r1000 = n % 1000;
    r100 = n % 100;
    r10 = n % 10;

    m = (n - r1000) / 1000;
    c = (r1000 - r100) / 100;
    d = (r100 - r10) / 10;
    u = r10;

    if (n <= 0 || m >= 10)
    {
        printf("Numero invalido!\n");
    }
    else
    {
        if (m > 0)
        {
            ordem = 4;
            printf("(quarta ordem) %d = ", n);
            if (m > 1)
            {
                printf("%d unidades de milhar ", m);
            }
            else
            {
                printf("%d unidade de milhar ", m);
            }
        }

        if (c > 0)
        {
            if (ordem == 0)
            {
                ordem = 3;
                printf("(terceira ordem) %d = ", n);
            }
            else
            {
                printf("+ ");
            }

            if (c > 1)
            {
                printf("%d centenas ", c);
            }
            else
            {
                printf("%d centena ", c);
            }
        }

        if (d > 0)
        {
            if (ordem == 0)
            {
                ordem = 2;
                printf("(segunda ordem) %d = ", n);
            }
            else
            {
                printf("+ ");
            }
            if (d > 1)
            {
                printf("%d dezenas ", d);
            }
            else
            {
                printf("%d dezena ", d);
            }
        }

        if (u > 0)
        {
            if (ordem == 0)
            {
                ordem = 1;
                printf("(primeira ordem) %d = ", n);
            }
            else
            {
                printf("+ ");
            }
            if (u > 1)
            {
                printf("%d unidades ", u);
            }
            else
            {
                printf("%d unidade ", u);
            }
        }

        printf("= ");
        switch (ordem)
        {
        case 4:
            printf("%d ", m * 1000);
            if (c != 0)
            {
                printf("+ %d ", c * 100);
            }
            if (d != 0)
            {
                printf("+ %d ", d * 10);
            }
            if (u != 0)
            {
                printf("+ %d", u);
            }
            printf("\n");
            break;

        case 3:
            printf("%d ", c * 100);
            if (d != 0)
            {
                printf("+ %d ", d * 10);
            }
            if (u != 0)
            {
                printf("+ %d", u);
            }
            printf("\n");
            break;

        case 2:
            printf("%d ", d * 10);
            if (u != 0)
            {
                printf("+ %d", u);
            }
            printf("\n");
            break;
            
        case 1:
            printf("%d\n", u);
        }
    }
}
