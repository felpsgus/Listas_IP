#include <stdio.h>

int main() {
    int T, n, A, B;
    int nA1, nA2, nA3, nB1, nB2, nB3, n1, n2, n3, naux; 
    n = 0;
    scanf("%d", &T);
    
    while (n < T)
    {
        scanf("%d %d", &A, &B);

        nA1 = A % 10;
        nA2 = ((A % 100) - nA1) / 10;
        nA3 = (A - (A % 100)) / 100;

        nB1 = B % 10;
        nB2 = ((B % 100) - nB1) / 10;
        nB3 = (B - (B % 100)) / 100;
        

        A = (nA1 * 100) + (nA2 * 10) + nA3;
        B = (nB1 * 100) + (nB2 * 10) + nB3;


        if (A > B)
        {
            n1 = A;
        }
        else
        {
            n1 = B;
        }

        printf("%d\n", n1);
        n++;
    }
    
    
}