#include <stdio.h>

int main() {
    double teste, ptotal, rtotal;
    double popular, geral, arquibancada, cadeiras;
    scanf("%lf", &teste);
    int i=1;
    while (i<=teste)
    {
        scanf("%lf %lf %lf %lf %lf", &ptotal, &popular, &geral, &arquibancada, &cadeiras);
        rtotal = (((ptotal*popular)/100)*1) + (((ptotal*geral)/100)*5) + (((ptotal*arquibancada)/100)*10) + (((ptotal*cadeiras)/100)*20);
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, rtotal);
        i++;
    }
}