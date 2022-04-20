#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string key = "bcdefghijklmnopqrswxyza";
    string plaintext = get_string("Plaintext: ");
    char ciphertext[strlen(plaintext)];
    int character = 98;

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        //for (int j = 0; j < 23; j++)
        //{
            if (plaintext[i] == character)
            {
                ciphertext[i] = key[1];
            }
            else
            {
                ciphertext[i] = 32;
            }

        //}
    }

    printf("%s\n", ciphertext);
}