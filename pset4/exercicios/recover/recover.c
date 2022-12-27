#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Verifica a quantidade de argumentos
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }

    // Abre o arquivo para leitura
    FILE *input_file = fopen(argv[1], "r");

    // 
}