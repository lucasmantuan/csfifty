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

    // Verifica se o input_file é um arquivo válido
    if (input_file == NULL)
    {
        printf("Could not open file\n");
        return 2;
    }

    // Armazene os blocos 512 bytes em um array
    unsigned char buffer[512];

    // Memorize a quantidade de imagens geradas
    int count_image = 0;

    // Ponteiro dos arquivos das imagens geradas
    FILE *output_file = NULL;

    // 
}