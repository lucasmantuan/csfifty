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

    do
    {
        // Calcula a quantidade de nascimentos e mortes arredondando os números
        nascimentos = trunc(inicial / 3);
        mortes = trunc(inicial / 4);
        
        // Atualiza o valor inicial levando em consideração a quantidade de nascimentos e mortes
        inicial = inicial + (int) nascimentos - (int) mortes;

        // Se a quantidade de nascimentos for igual a quantidade de mortes não adiona um novo ano
        if (inicial == final)
        {
            anos++;
        }
    }

    // Repepte enquanto a quantidade inicial for menor ou igual a quantidade final
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
    while (n < x);

    return n;
}