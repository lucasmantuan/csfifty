#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int get_letters(string n);
int get_words(string n);

int main(void) {
    string text = get_string("Text: ");

    int n = get_letters(text);
    printf("%i\n", n);

    int P = get_words(text);
    printf("%i\n", P);
}

int get_letters(string n)
{
    int letters = 0;
    for (int i = 0, t = strlen(n); i < t; i++)
    {
        if (isalpha(n[i]))
        {
            letters++;
        }
    }
    return letters;
}

int get_words(string n)
{
    int words = 1;
    for (int i = 0, t = strlen(n); i < t; i++)
    {
        if (isspace(n[i]))
        {
            words++;
        }
    }
    return words;
}