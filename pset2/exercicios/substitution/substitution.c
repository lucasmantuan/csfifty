#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string key = "bcdefghijklmnopqrswxyza";
    string plaintext = get_string("Plaintext: ");
    char ciphertext[strlen(plaintext)];
    int character = 97;

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (plaintext[i] == character)
        {
            ciphertext[i] = key[0];
        }
    }

    printf("%s\n", ciphertext);
}