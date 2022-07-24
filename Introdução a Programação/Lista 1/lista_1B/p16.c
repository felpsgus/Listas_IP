#include <stdio.h>

int main() {
    int num1, num2, num3, aux;
    char A, B, C;
    scanf("%d %d %d\n", &num1, &num2, &num3);
    scanf("%c %c %c", &A, &B, &C);

    if (num1 > num2)
    {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    if (num2 > num3)
    {
        aux = num2;
        num2 = num3;
        num3 = aux;
    }
    
    if (A=='A')
    {
        if (B=='B')
        {
            printf("%d %d %d\n", num1, num2, num3);
            //A B C
        }
        
        if (B=='C')
        {
            printf("%d %d %d\n", num1, num3, num2);
            //A C B
        }
    }

    if (A=='B')
    {
        if (B=='A')
        {
            printf("%d %d %d\n", num2, num1, num3);
            //B A C
        }
        
        if (B=='C')
        {
            printf("%d %d %d\n", num2, num3, num1);
            //B C A
        }
    }

    if (A=='C')
    {
        if (B=='A')
        {
            printf("%d %d %d\n", num3, num1, num2);
            //C A B
        }
        
        if (B=='B')
        {
            printf("%d %d %d\n", num3, num2, num1);
            //C B A
        }
    }
}
