#include <stdio.h>
#include <cs50.h>

void soma(int n);

int main (void)
{
    long card = 1219191415;

    int a, b;
    int x = 10;
    int y = 1;
    int p;

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

                //printf("maior que 10 - ");
            }
            //printf("%i\n", b);
        }

        //printf("%i\n", a);
    }
soma(12);
}

int soma(int n)
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