#include <stdio.h>
#include <math.h>

int i, k;

int imprimirValor(int n, int *arr)
{
    printf("(");
    for (i = 0; i < n; i++)
    {
        if (arr[i] != -1)
        {
            if (i != 0 && i < n)
            {
                printf(",");
            }
            printf("%d", arr[i]);
        }
    }
    printf(")\n");
}

int criarUniao(int n1, int n2, int *arrA, int *arrB)
{
    int n, j;

    n = n1 + n2;

    int uniao[n], arrC[n2];

    for (i = 0; i < n2; i++)
    {
        arrC[i] = arrB[i];
    }

    for (i = 0; i < n1; i++)
    {
        for (k = 0; k < n2; k++)
        {
            if (arrA[i] == arrC[k])
            {
                arrC[k] = -1;
            }
        }
    }

    for (i = 0; i < n1; i++)
    {
        uniao[i] = arrA[i];
    }

    for (i = 0; i < n2; i++)
    {
        uniao[i + n1] = arrC[i];
    }

    imprimirValor(n, uniao);
}

int criarIntercecao(int n1, int n2, int arrA[n1], int arrB[n2])
{
    int j, n = 0, intercecao[n1];

    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (arrA[j] == arrB[i])
            {
                intercecao[n] = arrA[j];
                n++;
            }
        }
    }

    imprimirValor(n, intercecao);
}

void leitura(int n, int arr[n])
{
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);

        for (k = 0; k < i; k++)
        {
            if (arr[k] == arr[i])
            {
                i--;
                break;
            }
        }
    }
}

int main()
{
    int n1, n2;

    while (1)
    {
        scanf("%d", &n1);
        if (n1 >= 1 && n1 <= 100)
        {
            break;
        }
    }

    while (1)
    {
        scanf("%d", &n2);
        if (n2 >= 1 && n2 <= 100)
        {
            break;
        }
    }

    int arrA[n1];
    int arrB[n2];

    leitura(n1, arrA);
    leitura(n2, arrB);

    criarUniao(n1, n2, arrA, arrB);
    criarIntercecao(n1, n2, arrA, arrB);
}