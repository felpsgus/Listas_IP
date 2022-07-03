#include <stdio.h>
#include <math.h>

int var(int resto){
    if (resto == 1){
            printf("\n");
        }
        else{
            printf(" x ");
        }
}

int fatoracao(int numero){
    int fator = 2;
    printf("%d = ", numero);
        
        while (numero > 1)
        {
            if ((numero%fator) == 0){
                printf("%d", fator);
                numero = numero / fator;
                var(numero);
            }
            else{
                fator++;
            }
        }

    return numero;
}

int main()
{
    int numero;
    //scanf("%d", &numero);
    
    while (scanf("%d", &numero) != EOF)
    {
        if (numero <= 0){
            printf("Fatoracao nao e possivel para o numero %d!\n", numero);
        }
        else{
                fatoracao(numero);
        }
        
    }
}