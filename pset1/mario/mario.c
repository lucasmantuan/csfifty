#include <stdio.h>
#include <cs50.h>

void space(int n);
void block(int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Tamanho: ");
    }
    while((n < 8) || (n > 1));

    int qtd_space = n - 1;
    int qtd_block = 1;

    for(int i = 0; i < n; i++)
    {
        space(qtd_space);
        block(qtd_block);
        qtd_space--;
        qtd_block++;
        printf("\n");
    }
}

void space(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

void block(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("#");
    }
}