#include <stdio.h>
#include <math.h>

int main() {
    int N, q, x;
    char *symbol = "^";
    scanf("%d", &N);
    x = 2;

    while (x<=N)
    {
        q = x*x;
        printf("%d%s2 = %d\n", x, symbol, q);
        x = x+2;
    }
}