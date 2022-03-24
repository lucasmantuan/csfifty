#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long card = 1234;

    float teste = (float) card / 10;

    teste = teste % 10;

    printf("%f\n", teste);
}