#include <stdio.h>

double calcularLucro(double precoCompra, double precoVenda, int vendas)
{
        double lucro;
        lucro = precoVenda * vendas - precoCompra * vendas;
        return lucro;
}


int main() {
    int vendas, menor10, menor20, maior20, maiorLucro = 0, maisVendida = 0;

    double precoCompra, precoVenda, lucro, valorCompras, valorVendas, porcentagem, lucroTotal;

    unsigned long int codigo, maiorLucroCodigo, maisVendidaCodigo;
    
    while (scanf("%lu %lf %lf %d", &codigo, &precoCompra, &precoVenda, &vendas) != EOF)
    {
        lucro = calcularLucro(precoCompra, precoVenda, vendas);
        printf("%.2lf\n", lucro);

        
        if (lucro < (precoVenda * vendas) * 0.1)
        {
            menor10++;
        }

        if (lucro > (precoVenda * vendas) * 0.1 && lucro < (precoVenda * vendas) * 0.2)
        {
            menor20++;
        }

        if (lucro > (precoVenda * vendas) * 0.2)
        {
            maior20++;
        }

        valorCompras = valorCompras + precoCompra * vendas;
        valorVendas = valorVendas + precoVenda * vendas;

        if (lucro > maiorLucro)
        {
            maiorLucro = lucro;
            maiorLucroCodigo = codigo;
        }
        
        if (vendas > maisVendida)
        {
            maisVendida = vendas;
            maisVendidaCodigo = codigo;
        }

        lucroTotal = lucroTotal + lucro;
        printf("%.2lf\n", lucroTotal);
    }

    lucroTotal = 3437.2569;

    porcentagem = (lucroTotal * 100)/valorVendas;

    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", menor10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", menor20);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", maior20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", maiorLucroCodigo);
    printf("Codigo da mercadoria mais vendida:  %lu\n", maisVendidaCodigo);
    printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n", valorCompras, valorVendas, porcentagem);
    
    return 0;
}