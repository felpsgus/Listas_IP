#include <stdio.h>

int main()
{
    double C;
    int q;
    scanf("%d", &q);
    /*int i = 0;
    scanf("%d", &q);
    while (i<q)
    {
        i++;
        scanf("%lf",&F);
        C = 5*(F-32)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", F, C);
    }*/

    double F[q];
    for (int i = 0; i < q; i++)
    {
        scanf("%lf", &F[i]);
    }

    for (int i = 0; i < q; i++)
    {
        C = 5 * (F[i] - 32) / 9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf\n", F[i], C);
    }
}