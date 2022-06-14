#include <stdio.h>
#include <math.h>

int main()
{
    double Al, Av, At, R, H, cost;
    scanf("%lf\n%lf", &R, &H);
    double pi = 3.14159;
    Al = (2 * pi * R) * H;
    Av = (pi * pow(R, 2)) * 2;
    At = Al + Av;
    cost = At * 100;

    printf("O VALOR DO CUSTO E = %.2lf\n", cost);
}