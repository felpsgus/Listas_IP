#include <stdio.h>
#include <math.h>

int lerN(void)
{
    int N, valido = 0;
    scanf("%d", &N);
    while (valido != 1)
    {
        if (1 <= N && N <= 100)
        {
            valido = 1;
            return N;
        }
        else
        {
            scanf("%d", &N);
        }
    }
}

int verificacao(int n, int N, int arr[N])
{
    int i, cont = 0;
    for (i = 0; i < N; i++)
    {
        if (arr[i] == n)
        {
            cont++;
        }
    }
    if (cont == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int imprimirValor(int n, int arr[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("(");
        }

        printf("%d", arr[i]);

        if (i == n - 1)
        {
            printf(")\n");
        }
        else
        {
            printf(",");
        }
    }
}

int criarUniao(int n1, int n2, int arrA[n1], int arrB[n2])
{
    int i, n, j;

    n = n1 + n2;

    j = n1;

    int uniao[n];
    int igual[100];

    for (i = 0; i < n1; i++)
    {
        uniao[i] = arrA[i];
    }

    for (i = 0; i < n2; i++)
    {
        if (verificacao(arrB[i], n1, uniao))
        {
            uniao[j] = arrB[i];
            j++;
        }
        else
        {
            n--;
        }
    }

    imprimirValor(n, uniao);
}

int criarIntercecao(int n1, int n2, int arrA[n1], int arrB[n2])
{
    int i, n, j, h = 0;

    int intercecao[n1];

    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (arrA[j] == arrB[i])
            {
                intercecao[h] = arrA[j];
                h++;
            }
        }
    }

    n = h;

    if (h == 0)
    {
        printf("()\n");
    }

    imprimirValor(n, intercecao);
}

int main()
{
    int n1, n2, i, k;

    n1 = lerN();
    n2 = lerN();

    int arrA[n1];
    int arrB[n2];

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arrA[i]);

        k = 0;
        for (k = 0; k < i; k++)
        {
            if (arrA[i] == arrA[k])
            {
                scanf("%d", &arrA[i]);
                k = 0;
                /*n1--;
                if (n1 == i)
                {
                    break;
                }*/
            }
        }
    }

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arrB[i]);

        k = 0;

        for (k = 0; k < i; k++)
        {
            if (arrB[i] == arrB[k])
            {
                scanf("%d", &arrB[i]);
                k = 0;
                /*n2--;
                if (n2 == i)
                {
                    break;
                }*/
            }
        }
    }

    criarUniao(n1, n2, arrA, arrB);

    criarIntercecao(n1, n2, arrA, arrB);
}