#include <stdio.h>

int main()
{
    int vendas, menor10 = 0, menor20 = 0, maior20 = 0, maiorLucro = 0, maisVendida = 0;

    double precoCompra, precoVenda, lucro, valorCompras, valorVendas, porcentagem = 0, lucroTotal;

    unsigned long int codigo, maiorLucroCodigo, maisVendidaCodigo;

    while (scanf("%lu %lf %lf %d", &codigo, &precoCompra, &precoVenda, &vendas) != EOF)
    {
        lucro = (precoVenda - precoCompra) * vendas;
        porcentagem = (lucro / (precoCompra * vendas)) * 100;

        if (porcentagem < 10)
        {
            menor10++;
        }

        if (porcentagem > 10 && porcentagem < 20)
        {
            menor20++;
        }

        if (porcentagem > 20)
        {
            maior20++;
        }

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

        valorCompras += precoCompra * vendas;
        valorVendas += precoVenda * vendas;
        lucroTotal += lucro;
    }

    porcentagem = (lucroTotal / valorCompras) * 100;

    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", menor10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", menor20);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", maior20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", maiorLucroCodigo);
    printf("Codigo da mercadoria mais vendida:  %lu\n", maisVendidaCodigo);
    printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n", valorCompras, valorVendas, porcentagem);

    return 0;
}