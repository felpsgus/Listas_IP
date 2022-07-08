#include <stdio.h>

int main()
{
    int n, i, nota, soma = 0, media = 0, acimaDaMedia = 0;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        soma = soma + arr[i];
    }

    media = soma / n;

    for (i = 0; i < n; i++)
    {
        nota = arr[i];
        if (nota > media)
        {
            acimaDaMedia++;
        }
    }

    printf("media: %d\n", media);
    printf("%d notas acima da media\n", acimaDaMedia);
    
    
}