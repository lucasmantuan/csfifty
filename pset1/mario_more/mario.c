#include <stdio.h>
#include <cs50.h>

void space(int n);
void block(int n);
int get_size(void);

int main(void)
{
    // Armazena o número informado
    int n = get_size();

    // Define o tamanho do bloco e espaço inicial
    int qtd_space = n - 1;
    int qtd_block = 1;

    // Desenha os blocos na tela
    for (int i = 0; i < n; i++)
    {
        space(qtd_space);
        block(qtd_block);
        space(2);
        block(2)
        qtd_space--;
        qtd_block++;
        printf("\n");
    }
}

// Função que obtem um número entre 1 e 8
int get_size(void)
{
    int size;
    do
    {
        size = get_int("Tamanho: ");
    }
    while (size < 1 || size > 8);
    return size;
}

// Função que adiciona espaços
void space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

// Função que adiciona blocos
void block(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}