#include <stdio.h>

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

int main()
{
    int n1, n2, i;

    n1 = lerN();
    n2 = lerN();

    int arrA[n1];
    int arrB[n2];

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arrA[i]);
    }

    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arrB[i]);
    }
}