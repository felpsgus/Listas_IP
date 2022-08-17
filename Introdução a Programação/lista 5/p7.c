#include <stdio.h>

int main()
{
    int i, k, n1, n2;
    scanf("%d", &n1);
    char buffer[1000];

    struct creditos
        {
            int codigo;
            double valorporcredito;
            char nomecurso[100];
        };
        struct creditos tabela[n1];

    for (i = 0; i < n1; i++)   
    {
        scanf("%d %lf %[^\n]s", &tabela[i].codigo, &tabela[i].valorporcredito, tabela[i].nomecurso);
    }
    
    scanf("%d", &n2);

    struct registro
        {
            int codigo;
            int creditos;
            char nomealuno[100];
        };
        struct registro alunos[n2];

    for (i = 0; i < n2; i++)
    {
        getchar();
        scanf("%[^\n]s", alunos[i].nomealuno);
        scanf("%d %d", &alunos[i].codigo, &alunos[i].creditos);
    }
    
    for (i = 0; i < n2; i++)
    {
        for (k = 0; k < n1; k++)
        {
            if (alunos[i].codigo == tabela[k].codigo)
            {
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n", alunos[i].nomealuno, tabela[k].nomecurso, alunos[i].creditos, tabela[k].valorporcredito, alunos[i].creditos * tabela[k].valorporcredito);
            }
        }
        
    }
    
}   