#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string key = "wxy";
    string plaintext = get_string("Plaintext: ");
    char ciphertext[strlen(plaintext)];

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (plaintext[i] == 97)
        {
            ciphertext[i] = key[i];
        }
    }

    printf("%s\n", ciphertext);
}