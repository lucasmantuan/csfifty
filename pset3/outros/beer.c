#include <stdio.h>

int 
main(void)
{
    int i;

    for (i = 10; i >= 1 ; i--)
    {
        if (i == 1)
        {
            printf("%d garrafa de cerveja no muro, bebo uma, jogo no lixo, nenhuma garrafa no muro...\n", i);
        }
        else
        {
            printf("%d garrafas de cerveja no muro, bebo uma, jogo no lixo, %d garrafas no muro...\n", i, i-1);
        }       
    }

    return 0;
}