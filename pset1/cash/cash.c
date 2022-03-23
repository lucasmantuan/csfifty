#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // solicita que o usuário insira o valor do troco
    float f = get_float("Por favor, digite o valor do troco desejado. ");

    // verifica se o valor é maior que zero
    int i = 0;
    while ((i != 1))
    {
        if (f > 0)
        {
             // faz a contagem da quantidade de moedas
            int change = f * 100;
            int j = 0;

            while ((change != 0))
            {
                if (change >= 25)
                {
                    change = change - 25;
                    j = j + 1;
                }
                else if (change < 25 && change >= 10)
                {
                    change = change - 10;
                    j = j + 1;
                }
                else if (change < 10 && change >= 5)
                {
                    change = change - 5;
                    j = j + 1;
                }
                else if (change < 5 && change >= 1)
                {
                    change = change - 1;
                    j = j + 1;
                }
            }
        printf("%d\n", j);
        i = 1;
        }
        else
        {
            f = get_float("Desculpe? Quanto você disse?\n");
        }
    }
    return 0;
}

// Função que obtem um número positivo
int get_size(void)
{
    int size;
    do
    {
        size = get_int("Tamanho: ");
    }
    while (size < 1 || size > 8);
    return size;
}