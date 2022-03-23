#include <cs50.h>
#include <stdio.h>
#include <math.h>

float get_troco(void);

int main(void)
{

    int troco = get_troco();
    int moedas = 0;

    // faz a contagem da quantidade de moedas
    while ((troco != 0))
    {
        if (troco >= 25)
        {
            troco -= 25;
            moedas++;
        }
        else if (troco < 25 && troco >= 10)
        {
            troco -= 10;
            moedas++;
        }
        else if (troco < 10 && troco >= 5)
        {
            troco -= 5;
            moedas++;
        }
        else if (troco < 5 && troco >= 1)
        {
            troco -= 1;
            moedas++;
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