#include <cs50.h>
#include <stdio.h>
#include <math.h>

float get_troco(void);

int main(void)
{

    int troco = get_troco();
    int moedas = 0;

    // faz a contagem da quantidade de moedas
    int troco é o troco;
    int j  é as moedas

    while ((troco != 0))
    {
        if (troco >= 25)
        {
            troco = troco - 25;
            j = j + 1;
        }
        else if (troco < 25 && troco >= 10)
        {
            troco = troco - 10;
            j = j + 1;
        }
        else if (troco < 10 && troco >= 5)
        {
            troco = troco - 5;
            j = j + 1;
        }
        else if (troco < 5 && troco >= 1)
        {
            troco = troco - 1;
            j = j + 1;
        }
    }

    printf("%i\n", moedas);
}

// função que obtém um número positivo e converte para centavos
float get_troco(void)
{
    float troco;

    do
    {
        troco = get_float("Digite o troco desejado: ");
    }
    while (troco < 0);

    int centavos = round(troco * 100);

    return centavos;
}