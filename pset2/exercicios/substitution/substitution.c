#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string key = "bcdefghijklmnopqrswxyza";
    string plaintext = get_string("Plaintext: ");
    char ciphertext[strlen(plaintext)];
    int character = 97;

    if (plaintext[0] == character)
    {
        ciphertext[0] = key[0];
    }

    printf("%s\n", ciphertext);
}