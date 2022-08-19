#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    int media;

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            media = round((image[j][i].rgbtRed + image[j][i].rgbtGreen + image[j][i].rgbtBlue) / 3.0);
            image[j][i].rgbtRed = media;
            image[j][i].rgbtGreen = media;
            image[j][i].rgbtBlue = media;
        }
    }

    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    int sepiaRed;
    int sepiaGreen;
    int sepiaBlue;

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            sepiaRed = round(0.393 * image[j][i].rgbtRed + 0.769 * image[j][i].rgbtGreen + 0.189 * image[j][i].rgbtBlue);
            sepiaGreen = round(0.349 * image[j][i].rgbtRed + 0.686 * image[j][i].rgbtGreen + 0.168 * image[j][i].rgbtBlue);
            sepiaBlue = round(0.272 * image[j][i].rgbtRed + 0.534 * image[j][i].rgbtGreen + 0.131 * image[j][i].rgbtBlue);

            if (sepiaRed > 255)
            {
                image[j][i].rgbtRed = 255;
            } else {
                image[j][i].rgbtRed = sepiaRed;
            }

            if (sepiaGreen > 255)
            {
                image[j][i].rgbtGreen  = 255;
            } else {
                image[j][i].rgbtGreen  = sepiaGreen;
            }

            if (sepiaBlue > 255)
            {
                image[j][i].rgbtBlue  = 255;
            } else {
                image[j][i].rgbtBlue  = sepiaBlue;
            }
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE aux;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            aux = image[i][j];
            image[i][j] = image[i][width - (j + 1)];
            image[i][width - (j + 1)] = aux;
        }
    }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
        // Iteração para acesso a cada pixel da imagem
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            // Variáveis para cálculo da média dos valores RGB de cada pixel
            int somaMediaR = 0;
            int somaMediaG = 0;
            int somaMediaB = 0;
            int cont = 0;
            // Iteração para acesso a matriz 3x3 referente a cada pixel
            // A variável 'a' vai de 'i - 1', linha anterior ao pixel, a 'i + 1' linha posterior ao pixel
            for(int a = i - 1; a <= i + 1; a++)
            {
                // A variável 'a' não pode ser negativa e não superior ao total de linhas
                // Valores negativos ou superiores ao total de linhas significa acesso a local de memória fora do arquivo
                if(a >= 0 && a <= height)
                {
                    // A variável 'b' vai de 'j - 1', coluna anterior ao pixel, a 'j + 1' coluna posterior ao pixel
                    for(int b = j - 1; b <= j + 1; b++)
                    {
                        // A variável 'b' não pode ser negativa e não superior ao total de colunas
                        // Valores negativos ou superiores ao total de colunas significa acesso a local de memória fora do arquivo
                        if(b >= 0 && b <= width)
                        {
                            somaMediaR += image[a][b].rgbtRed;
                            somaMediaG += image[a][b].rgbtGreen;
                            somaMediaB += image[a][b].rgbtBlue;
                            cont++;
                        }
                    }
                }
            }
        }
    }
    // for (int i = 1; i < height - 1; i++)
    // {
    //     for (int j = 1; j < width - 1; j++)
    //     {
    //         image[i][j].rgbtRed = round((
    //         image[i+1][j].rgbtRed +
    //         image[i+1][j-1].rgbtRed +
    //         image[i][j-1].rgbtRed +
    //         image[i-1][j-1].rgbtRed +
    //         image[i-1][j].rgbtRed +
    //         image[i-1][j+1].rgbtRed +
    //         image[i][j+1].rgbtRed +
    //         image[i+1][j+1].rgbtRed) / 9.0);

    //         image[i][j].rgbtGreen = round((
    //         image[i+1][j].rgbtGreen +
    //         image[i+1][j-1].rgbtGreen +
    //         image[i][j-1].rgbtGreen +
    //         image[i-1][j-1].rgbtGreen +
    //         image[i-1][j].rgbtGreen +
    //         image[i-1][j+1].rgbtGreen +
    //         image[i][j+1].rgbtGreen +
    //         image[i+1][j+1].rgbtGreen) / 9.0);

    //         image[i][j].rgbtBlue = round((
    //         image[i+1][j].rgbtBlue +
    //         image[i+1][j-1].rgbtBlue +
    //         image[i][j-1].rgbtBlue +
    //         image[i-1][j-1].rgbtBlue +
    //         image[i-1][j].rgbtBlue +
    //         image[i-1][j+1].rgbtBlue +
    //         image[i][j+1].rgbtBlue +
    //         image[i+1][j+1].rgbtBlue) / 9.0);
    //     }
    // }
    return;
}
