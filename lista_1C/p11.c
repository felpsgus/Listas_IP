#include <stdio.h>

int main() {
    int n, t, valor1, valor2, s, s1, s2;
    t=0;
    s=0;
    s1 = 0;
    s2 = 0;
    scanf("%d", &n);
    scanf("%d", &valor1);
    while (t<(n-1))
    {
        scanf("%d", &valor2);
        if (valor2 > valor1)
        {
            s++;
            valor1 = valor2;
            if (s1 <= s)
            {
                s1 = s;
            }
            
        }
        else
        {
            s = 0;
            valor1 = valor2;
            
        }
        t++;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", s1);
}