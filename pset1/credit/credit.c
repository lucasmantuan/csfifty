#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long card = 1234;

    int a;

    a = (card % 100) / 10;

    printf("%i\n", a);
}