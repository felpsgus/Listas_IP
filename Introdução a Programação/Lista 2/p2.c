#include <stdio.h>

int lerN(void)
{
    int N, valido = 0;
    scanf("%d", &N);
    while (valido != 1)
    {
        if (1 <= N && N <= 1000)
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
    int N, K, i, maiores = 0;

    N = lerN();

    int V[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &V[i]);
    }

    scanf("%d", &K);

    for (i = 0; i < N; i++)
    {
        if (K <= V[i])
        {
            maiores++;
        }
    }
    
    printf("%d\n", maiores);
}