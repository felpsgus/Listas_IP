#include <stdio.h>

int main() {
    double a, b, c, d, h;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

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

    if (a>d)
    {
        h = a;
        a = d;
        d = h;
    }

    if (b>c)
    {
        h = b;
        b = c;
        c = h;
    }

    if (b>d)
    {
        h = b;
        b = d;
        d = h;
    }

    if (c>d)
    {
        h = c;
        c = d;
        d = h;
    }
    
    printf("%.2lf, %.2lf, %.2lf, %.2lf", a, b, c, d);

    /*for ( int i = 0; i < 4; ++i) 
        {
            for (int j = i + 1; j < 4; ++j)
            {
                if (array[i] > array[j]) 
                {
                    a =  array[i];
                    array[i] = array[j];
                    array[j] = a;
                }
            }
        }

    for (int i = 0; i < 4; i++)
    {
        printf("%.2lf, ", array[i]);
    }*/
}