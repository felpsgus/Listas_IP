#include <stdio.h> 
#include <math.h>

int main() {
    double Fh, Cs , inch, ml;
    scanf("%lf %lf", &Fh, &inch);

    Cs = ((Fh-32)*5)/9;
    ml = inch * 25.4;

    printf("O VALOR EM CELSIUS = %.2lf\n", Cs);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", ml);
}