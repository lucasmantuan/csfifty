#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long card = 1234567890;

    int a;
    int x = 10;
    int y = 1;
    int p;

    for (int i = 0; i < 9; i++)
    {
        p = i % 2;

        if (p == 0)
        {
            printf("par\n");
        }
        else
        {
            printf("impar\n");
        }

        a = (card % x) / y;
        x *= 10;
        y *= 10;
        printf("%i\n", a);
    }

}