#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

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

    // Char filename[8]
    char *filename = malloc(8 * sizeof(char));

    // Leia os blocos de 512 bytes
    while (fread(buffer, sizeof(char), 512, input_file))
    {
        // Verifique se os butes indicam o começo de um arquivo JPEG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // Escreva os nomes dos arquivos JPEGs
            sprintf(filename, "%03i.jpg", count_image);

            // Abra o output_file para escrita
            output_file = fopen(filename, "w");

            // Conte o número de images achadas
            count_image++;
        }

        // Verifique se o arquivo de saída foi usado para uma entrada válida
        if (output_file != NULL)
        {
            fwrite(buffer, sizeof(char), 512, output_file)
        }
    }

    free(filename);
    fclose(output_file);
    fclose(inoput_file);

    return 0;
}