#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string plaintext = get_string("Plaintext: ");
    string key = "wxy";
    string ciphertext[strlen(plaintext)];

    if (plaintext[0] == 'a')
    {
        ciphertext[0] = key[0];
        printf("%c\n", ciphertext[0]);
    }

    printf("%s\n", plaintext);
}