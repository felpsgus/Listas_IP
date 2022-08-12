#include <stdio.h>

int main()
{
    int i, k;
    int teste, n, caso = 1, equivalente = 0;
    scanf("%d", &teste);
    while (teste--)
    {
        scanf("%d", &n);
        struct valores
        {
            double numerador;
            double denominador;
        };
        struct valores f[n];

        for (i = 0; i < n; i++)
        {
            scanf("%lf", &f[i].numerador);
            getchar();
            scanf("%lf", &f[i].denominador);
        }
        
        printf("Caso de teste %d\n", caso++);

        for (i = 0; i < n; i++)
        {
            for (k = i + 1; k < n; k++)
            {
                if (f[k].numerador/f[k].denominador == f[i].numerador/f[i].denominador)
                {
                    printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", f[i].numerador, f[i].denominador, f[k].numerador, f[k].denominador);
                    equivalente++;
                }
            }
        }

        if (equivalente == 0)
        {
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
        equivalente = 0;
    }
}