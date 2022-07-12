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
        return 0;
    }
    else
    {
        return 1;
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
    int i, k, n, j;

    n = n1 + n2;

    j = n1;

    int uniao[n];

    for (i = 0; i < n1; i++)
    {
        uniao[i] = arrA[i];
    }

    for (k = 0; k < n1; k++)
    {
        for (i = 0; i < n2; i++)
        {
            if (!verificacao(uniao[k], n2, arrB))
            {
                uniao[j] = arrB[i];
                j++;
                k++;
            }
            else
            {
                k++;
                n--;
            }
        }
    }

    imprimirValor(n, uniao);
}

int criarIntercecao(int n1, int n2, int arrA[n1], int arrB[n2])
{
    int i, n = 0, h = 0;

    int intercecao[n];

    for (i = 0; i < n2; i++)
    {
        if (verificacao(arrB[i], n1, arrA))
        {
            intercecao[i] = arrB[i];
            h++;
        }
    }

    n = h;

    imprimirValor(n, intercecao);
}

int main()
{
    int n1, n2, i, k = 0;

    n1 = lerN();
    n2 = lerN();

    int arrA[n1];
    int arrB[n2];

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arrA[i]);

        while (k < i)
        {
            if (arrA[i] == arrA[k])
            {
                scanf("%d", &arrA[i]);
                k = 0;
            }
            k++;
        }
    }

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arrB[i]);

        while (k < i)
        {
            if (arrB[i] == arrB[k])
            {
                scanf("%d", &arrB[i]);
                k = 0;
            }
            k++;
        }
    }

    criarUniao(n1, n2, arrA, arrB);

    criarIntercecao(n1, n2, arrA, arrB);
}