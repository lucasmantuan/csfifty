#include <stdio.h>
#include <cs50.h>

int somar_digitos(int n);
string somar_multiplicar_digitos(long n);
int contar_digitos(long n);

int main (void)
{
    long cartao = get_long("Número: ");
    string resultado = somar_multiplicar_digitos(cartao);
    printf("%s\n", resultado);
}

// Soma e multiplica os dígitos
string somar_multiplicar_digitos(long n)
{
    int d = contar_digitos(n);
    int pr;
    int sg;
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

        if (i + 1 == d)
        {
            pr = z;
        }
        if (i + 2 == d)
        {
            sg = z;
        }

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

    // Faz a validação do número do cartao
    if (((soma % 10) / 1) != 0)
    {
        return "INVALID";
    }
    else if (pr == 3 && (sg == 4 || sg == 7) && d == 15)
    {
        return "AMEX";
    }
    else if (pr == 5 && (sg == 1 || sg == 2 || sg == 3 || sg == 4 || sg == 5) && d == 16)
    {
        return "MASTERCARD";
    }
    else if (pr == 4 && (d == 13 || d == 16))
    {
        return "VISA";
    }
    else
    {
        return "INVALID";
    }

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