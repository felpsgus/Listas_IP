#include <stdio.h>

int main() {
    int VI, R, n, i, soma;
    scanf("%d %d %d", &VI, &R, &n);
    i = 0;
    soma = 0;
    while (i < n)
    {
        soma = soma + (VI + R*i);
        i++;
    }
    printf("%d\n", soma);
}