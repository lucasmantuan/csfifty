#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long card = 4583;

    int a;
    int x = 10;
    int y = 1;

    for (int i = 0; i < card.length; i++ )
    {
        a = (card % x) / y;
        x *= 10;
        y *= 10;
        printf("%i\n", a);
    }

}