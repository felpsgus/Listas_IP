#include <stdio.h>

int main()
{
    int i, k;
    double n1, n2, n3;

    struct dados
    {
        char nome[50];
        int mat;
        double media;
    };
    struct dados aluno[10];
    struct dados aux;

    for (i = 0; i < 10; i++)
    {
        scanf("%[^ ]s", aluno[i].nome);
        scanf("%d", &aluno[i].mat);
        scanf("%lf", &n1);
        scanf("%lf", &n2);
        scanf("%lf", &n3);
        aluno[i].media = (n1 + n2 + n3) / 3.0;
    }
    
    for (i = 0; i < 10; i++)
    {
        for (k = i + 1; k < 10; k++)
        {
            if (aluno[i].media > aluno[k].media)
            {
                aux = aluno[i];
                aluno[i] = aluno[k];
                aluno[k] = aux;
            }
        }
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("%s %d %lf", aluno[i].nome, aluno[i].mat, aluno[i].media);
    }
    
}