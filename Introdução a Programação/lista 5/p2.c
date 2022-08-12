#include <stdio.h>

int main()
{
    int i, k;
    int teste, n, x, quantaux;
    char aux[50];
    double preco;
    scanf("%d", &teste);
    while (teste--)
    {
        scanf("%d", &n);

        struct lista
        {
            char nome[50];
            double preco;
            int quantidade;
        };
        struct lista v[n];

        for (i = 0; i < n; i++)
        {
            scanf("%[^ ]s", v[i].nome);
            scanf("%lf", &v[i].preco);
        }

        scanf("%d", &x);

        for (i = 0; i < x; i++)
        {
            scanf("%[^ ]s", aux);
            scanf("%d", &quantaux);
            for (k = 0; k < n; k++)
            {
                if (v[k].nome == aux)
                {
                    v[k].quantidade = quantaux;
                    printf("%d\n", v[k].quantidade);
                }
            }
            
        }

        for (i = 0; i < n; i++)
        {
            preco += v[i].preco * v[i].quantidade;
        }
        printf("R$ %.2lf\n", preco);
    }
}