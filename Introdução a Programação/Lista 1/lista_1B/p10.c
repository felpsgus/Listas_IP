#include <stdio.h>

int main() {
    double a, b, c, h;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a>b)
    {
        h = a;
        a = b;
        b = h;
    }
    
    if (a>c)
    {
        h = a;
        a = c;
        c = h;
    }

    if (b>c)
    {
        h = b;
        b = c;
        c = h;
    }
    
    printf("%.2lf, %.2lf, %.2lf", a, b, c);
}