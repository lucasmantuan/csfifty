#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int get_letters(string n);
int get_words(string n);
int get_sentences(string n);

int main(void)
{
    string text = get_string("Text: ");

    // calcula a quantidade de letras, palavras e sentenças
    int l = get_letters(text);
    int w = get_words(text);
    int s = get_sentences(text);

    // calcula a média de letras e sentenças
    float avg_letters = (l * 100) / (float) w;
    float avg_sentences = (s * 100) / (float) w;

    // calcula o indice de coleman-liau
    float index = 0.0588 * avg_letters - 0.296 * avg_sentences - 15.8;

    // exibe o nível de leitura
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
}

// calcula a quantidade de letras
int get_letters(string n)
{
    int letters = 0;
    for (int i = 0, t = strlen(n); i < t; i++)
    {
        // verifica se é uma letra
        if (isalpha(n[i]))
        {
            letters++;
        }
    }
    return letters;
}

// calcula a quantidade de palavras
int get_words(string n)
{
    int words = 1;
    for (int i = 0, t = strlen(n); i < t; i++)
    {
        // verifica se é um espaço
        if (isspace(n[i]))
        {
            words++;
        }
    }
    return words;
}

// calcula a quantidade de sentenças
int get_sentences(string n)
{
    int sentences = 0;
    for (int i = 0, t = strlen(n); i < t; i++)
    {
        // verifica se é um ponto final, de exclamação ou interrogração
        if (n[i] == 46 || n[i] == 63 || n[i] == 33)
        {
            sentences++;
        }
    }
    return sentences;
}