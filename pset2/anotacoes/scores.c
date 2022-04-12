#include <cs50.h>
#include <stdio.h>

float media(int quantidade, int array[]);
const int TOTAL = 3;

int main(void)
{
    int scores[TOTAL];
    for (int i = 0; i < TOTAL; i++)
    {
        scores[i] = get_int("Pontuação: ");
    }

    // imprimir a média
    printf("Média: %f \n", media(TOTAL, scores));
}

float media(int quantidade, int array[])
{
    int soma = 0;
    for (int i = 0; i < quantidade; i++)
    {
        soma += array[i];
    }
    return soma / (float) quantidade;
}