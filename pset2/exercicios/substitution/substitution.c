#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string key = "wxy";
    string plaintext = get_string("Plaintext: ");
    char ciphertext[strlen(plaintext)];

    if (plaintext[0] == (char) 65)
    {
        ciphertext[0] = key[0];
    }

    printf("%s\n", ciphertext);
}