#include <stdio.h>
#include <cs50.h>

int somar(int);

int main (void)
{
    long card = 1219191715;

    int a, b;
    int x = 10;
    int y = 1;
    int p;

    int acc = 0;
    int res;

    for (int i = 0; i < 9; i++)
    {
        p = i % 2;

        a = (card % x) / y;
        x *= 10;
        y *= 10;

        if (p == 0)
        {
            b = a * 2;
            if (b >= 10)
            {
                res = somar(b);
                acc += res;
            }
            //printf("%i\n", b);
        }

        //printf("%i\n", a);
    }
}

int somar(int n)
{
    int soma = 0;
    int x = 10;
    int y = 1;
    int z;

    for (int i = 0; i < 2; i++)
    {
        z = (n % x) / y;
        x *= 10;
        y *= 10;
        soma += z;
    }

    return soma;
}