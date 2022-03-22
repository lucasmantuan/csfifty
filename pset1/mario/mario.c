#include <stdio.h>
#include <cs50.h>

void space(int n);
void block(int n);
int get_size(void);

int main(void)
{

    int n = get_size();
    printf("%i\n", n);

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

int get_size(void)
{
    int size;
    do
    {
        size = get_int("Tamanho: ");
    }
    while(size < 1);
    return size;
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