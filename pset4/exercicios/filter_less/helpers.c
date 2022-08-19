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
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtRed = round((original[i][j].rgbtRed + original[i][j - 1].rgbtRed + original[i][j + 1].rgbtRed + original[i + 1][j - 1].rgbtRed + original[i + 1][j + 1].rgbtRed + original[i + 1][j].rgbtRed + original[i - 1][j - 1].rgbtRed + original[i - 1][j + 1].rgbtRed + original[i - 1][j].rgbtRed) / 9.0);

            image[i][j].rgbtGreen = round((original[i][j].rgbtGreen + original[i][j - 1].rgbtGreen + original[i][j + 1].rgbtGreen + original[i + 1][j - 1].rgbtGreen + original[i + 1][j + 1].rgbtGreen+ original[i + 1][j].rgbtGreen + original[i - 1][j - 1].rgbtGreen + original[i - 1][j + 1].rgbtGreen + original[i - 1][j].rgbtGreen) / 9.0);

            image[i][j].rgbtBlue = round((original[i][j].rgbtBlue + original[i][j - 1].rgbtBlue + original[i][j + 1].rgbtBlue + original[i + 1][j - 1].rgbtBlue + original[i + 1][j + 1].rgbtBlue + original[i + 1][j].rgbtBlue + original[i - 1][j - 1].rgbtBlue + original[i - 1][j + 1].rgbtBlue + original[i - 1][j].rgbtBlue) / 9.0);
        }
    }
    return;
}
