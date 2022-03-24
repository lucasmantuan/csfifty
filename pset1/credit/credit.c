#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long card = 123456789;

    int a;
    int x = 10;
    int y = 1;

    for (int i = 0; i < 10; i++ )
    {
        a = (card % x) / y;
        x *= 10;
        y *= 10;
        printf("%i ", a);
    }

}