#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            int cipherindex = ((((int) plaintext[i] - 97) + key) % 26) + 97;
            printf("%c", (char) cipherindex);
        } else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}