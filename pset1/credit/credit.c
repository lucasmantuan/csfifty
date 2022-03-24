#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long card = 1212121919;

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
            printf("%i\n", b);
        }

        //printf("%i\n", a);
    }

}