#include <stdio.h>
#include <cs50.h>

int somar_digitos(int n);
int somar_multiplicar_digitos(long n);
int contar_digitos(long n);

int main (void)
{
    int resultado = somar_multiplicar_digitos(4003600000000014);
    printf("%i\n", resultado);
}

// Soma e multiplica os dígitos
int somar_multiplicar_digitos(long n)
{
    int d = contar_digitos(n);
    int posicao;
    int multiplicacao = 0;
    int soma = 0;
    long x = 10;
    long y = 1;
    long z;

    for (int i = 0; i < d; i++)
    {
        z = (n % x) / y;
        x *= 10;
        y *= 10;
        posicao = i % 2;

        if (posicao != 0) {
            multiplicacao = z * 2;

            if (multiplicacao >= 10) {
                soma += somar_digitos(multiplicacao);
            } else {
                soma += multiplicacao;
            }
        } else {
            soma += z;
        }
    }

    return soma;
}

// Soma os dígitos internos
int somar_digitos(int n)
{
    int soma = 0;
    int d = contar_digitos(n);
    int x = 10;
    int y = 1;
    int z;

    for (int i = 0; i < d; i++)
    {
        z = (n % x) / y;
        x *= 10;
        y *= 10;
        soma += z;
    }

    return soma;
}

// Conta a quantidade de digitos
int contar_digitos(long n)
{
    int digitos = 0;

    do
    {
        n /= 10;
        digitos++;
    }
    while (n >= 1);

    return digitos;
}