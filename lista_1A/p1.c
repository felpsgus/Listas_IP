#include <stdio.h> 
#include <math.h>

int main() {
    double salary, energy, kw, consumed, price, discount;
    scanf("%lf %lf", &salary, &consumed);

    energy = salary * 0.7;
    kw = energy / 100;
    price = kw * consumed;
    discount = price * 0.9;

    printf("Custo por kW: R$ %.2lf\n", kw);
    printf("Custo do consumo: R$ %.2lf\n", price);
    printf("Custo com desconto: R$ %.2lf\n", discount);
}