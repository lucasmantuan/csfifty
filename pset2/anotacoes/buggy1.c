#include <cs50.h>
#include <stdio.h>

// prototype
int get_negative_int(void);

int main(void)
{
    // pega um número inteiro negativo do usuário
    int i = get_negative_int();
    printf ("%i \n", i);
}

int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Número inteiro negativo: ");
    }
    while (n < 0);
    return n;
}