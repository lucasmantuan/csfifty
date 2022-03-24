#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long card = 1234;

    int teste;

    teste = teste - (card % 100);

    teste = teste / 10;

    printf("%i\n", teste);
}