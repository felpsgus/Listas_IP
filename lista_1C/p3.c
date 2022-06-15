#include <stdio.h>
#include <math.h>

int main() {
    int N, p, q, x;
    scanf("%d", &N);
    x = 2;
    p = N%2;

    while (x<=N)
    {
        q = x*x;
        printf("%dˆ2 = %d\n", x, q);
        x = x+2;
    }
}