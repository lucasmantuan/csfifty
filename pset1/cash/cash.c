#include <cs50.h>
#include <stdio.h>
#include <math.h>

float get_troco(void);

int main(void)
{
    int troco = get_troco();
    int moedas = 0;

    // executa o código abaixo enquanto o troco for diferente de 0
    while ((troco != 0))
    {
        // se o valor do troco for maior ou igual a 25
        if (troco >= 25)
        {
            // subtrai 25 do troco e adiciona 1 moeda
            troco -= 25;
            moedas++;
        }
        // se o valor do troco for menor que 25 e maior ou igual a 10
        else if (troco < 25 && troco >= 10)
        {
            // subtrai 10 do troco e adiciona 1 moeda
            troco -= 10;
            moedas++;
        }
        // se o valor do troco for menor que 10 e maior ou igual a 5
        else if (troco < 10 && troco >= 5)
        {
            // subtrai 5 do troco e adiciona 1 moeda
            troco -= 5;
            moedas++;
        }
        // se o valor do troco for menor que 5 e maior ou igual a 1
        else if (troco < 5 && troco >= 1)
        {
            // subtrai 1 do troco e adiciona 1 moeda
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