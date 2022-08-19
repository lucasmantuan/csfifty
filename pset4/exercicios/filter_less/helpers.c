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
    for (int j = 1; j < height - 1; j++)
    {
        for (int i = 1; i < width - 1; i++)
        {
            image[j][i].rgbtRed = round((

            image[j  ][i  ].rgbtRed +
            image[j  ][i+1].rgbtRed +
            image[j+1][i+1].rgbtRed +
            image[j+1][i  ].rgbtRed +
            image[j+1][i-1].rgbtRed +
            image[j+1][i  ].rgbtRed +
            image[j-1][i-1].rgbtRed +
            image[j  ][i+1].rgbtRed +
            image[j-1][i+1].rgbtRed) / 9.0);

            image[j][i].rgbtGreen = round(( image[j][i].rgbtGreen + image[j][i+1].rgbtGreen + image[j+1][i+1].rgbtGreen + image[j+1][i].rgbtGreen + image[j+1][i-1].rgbtGreen + image[j+1][i].rgbtGreen + image[j-1][i-1].rgbtGreen + image[j][i+1].rgbtGreen + image[j-1][i+1].rgbtGreen) / 9.0);

            image[j][i].rgbtBlue = round(( image[j][i].rgbtBlue + image[j][i+1].rgbtBlue + image[j+1][i+1].rgbtBlue + image[j+1][i].rgbtBlue + image[j+1][i-1].rgbtBlue + image[j+1][i].rgbtBlue + image[j-1][i-1].rgbtBlue + image[j][i+1].rgbtBlue + image[j-1][i+1].rgbtBlue) / 9.0);
        }
    }
    return;
}
