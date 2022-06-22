#include <stdio.h>

int main() {
    int num1, num2, num3;
    //char A, B, C;
    char letter[3];
    scanf("%d %d %d", &num1, &num2, &num3);
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", &letter[i]);
    }

    for (int i = 0; i < 1; i++)
    {
        char A = letter[i];
        //char B = letter[i+1];
        //char C = letter[i+2];
    }

    
    printf("%d %d %d\n", num1, num2, num3);
    printf("%c\n", A);
}