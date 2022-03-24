#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long card = 2323232323;

    int a;
    int x = 10;
    int y = 1;

    for (int i = 0; i < 9; i += 2 )
    {
        a = (card % x) / y;
        x *= 10;
        y *= 10;
        printf("%i ", a);
    }

}