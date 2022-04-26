#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);
int compute_index(int n);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Determina o vencedor
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
        printf("%i\n", score1);
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

// Calcula a pontuação das palavras
int compute_score(string word)
{
    int index = 0;
    int score = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (isalpha())
        {

        }



        index = compute_index(tolower(word[i]));
        score += POINTS[index];
    }
    return score;
}

// Retorna o índice da letra
int compute_index(int n)
{
    int letter = 97;
    for (int i = 0; i < 26; i++)
    {
        if (n == letter)
        {
            return i;
        }
        letter++;
    }
    return 0;
}