#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int key = atoi(argv[1]);
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        int cipherindex = ((((int) plaintext[i] - 97) + key) % 26) + 97;
        printf("%c", (char) cipherindex);
    }
    printf("\n");
}