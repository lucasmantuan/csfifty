#include <cs50.h>
#include <stdio.h>

const int TOTAL = 3;

int main(void)
{
    int scores[TOTAL];
    for (int i = 0; i < TOTAL; i++)
    {
        socores[i] = get_int("Pontuação: ")
    }

    // imprimir a média
    printf("Média: %f \n", (scores[0] + scores[1] + scores[2]) / TOTAL);
}