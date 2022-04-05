#include <stdio.h>
#include <cs50.h>
#include <math.h>

int get_inicial(void);
int get_final(int x);

int main(void)
{
    int inicial = get_inicial();
    int final = get_final(inicial);
    int anos = 0;

    float nascimentos;
    float mortes;

    // Calcula a quantidade de anos para o crescimento populacional
    do
    {
        nascimentos = trunc(inicial / 3);
        mortes = trunc(inicial / 4);
        inicial = inicial + (int) nascimentos - (int) mortes;
        anos++;
    }
    while (inicial < final);

    printf("Years: %i\n", anos);
}

// Solicita a população inicial
int get_inicial(void)
{
    int n;

    do
    {
        n = get_int("Start size: ");
    }
    while (n < 9);

    return n;
}

// Solicita a população final
int get_final(int x)
{
    int n;

    do
    {
        n = get_int("End size: ");
    }
    while (n < x + 1);

    return n;
}