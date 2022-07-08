#include <stdio.h>

int verificacao(int N, int M, int vetor[N], int numero)
{
    int i, sinal = 0;
    for (i = 0; i < N; i++)
    {
        if (numero == vetor[i])
        {
            sinal = 1;
        }
    }

    if (sinal == 1)
    {
        printf("ACHEI\n");
    }
    else
    {
        printf("NAO ACHEI\n");
    }
    


    return 0;
}

int main()
{
    int N, M, i, numero;
    scanf("%d", &N);

    int vetor[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &M);

    for (i = 0; i < M; i++)
    {
        scanf("%d", &numero);

        verificacao(N, M, vetor, numero);
    }
}