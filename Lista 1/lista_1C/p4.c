#include <stdio.h>

int main() {
    int x, y, p;
    int i = 0;
    scanf("%d %d", &x, &y);
    p = x % 2;
    if (p!=0)
    {
        printf("O PRIMEIRO NUMERO NAO E PAR.\n");
    }
    else
    {
        while (i<y)
        {
            printf("%d ", x);
            x = x + 2;
            i++;
        }
        printf("\n");
    }

}