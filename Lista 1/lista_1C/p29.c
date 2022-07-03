#include <stdio.h>
#include <math.h>

int fatorial(int valor)
{
    while (valor > 0)
    {
        valor = valor * (valor - 1);
    }

    return valor;
}

int main()
{
    int n;
    double seno, x;

    scanf("%lf %d", &x, &n);

    seno = (pow((-1), n) * pow(x, (2*n-1))) / fatorial(2*n-1);
    
    printf("seno(%.2lf) = %.6lf\n", x, seno);
}