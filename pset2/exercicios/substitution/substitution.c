#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string key = "bcdefghijklmnopqrstuvwxyza";
    string plaintext = get_string("Plaintext: ");
    char ciphertext[strlen(plaintext)];
    int character = 97;

    for (int j = 0; j < 26; j++)
    {
        if (plaintext)
        {

        }
        else
        {

        }

        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if (plaintext[i] == character)
            {
                ciphertext[i] = key[j];
            }
        }
    character++;
    }

    printf("Ciphertext: %s\n", ciphertext);
}