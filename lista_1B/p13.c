#include <stdio.h>

int main() {
    int CC, DR, RT, tipo;
    tipo = 7;
    scanf("%d\n%d\n%d", &CC, &DR, &RT);
    if (CC < 7)
    {
        tipo=8;
        if (DR>50)
        {
            tipo=9;
            if (RT>80000)
            {
                tipo=10;
            }
            
        }
        
    }
    printf("ACO DE GRAU = %d", tipo);
}