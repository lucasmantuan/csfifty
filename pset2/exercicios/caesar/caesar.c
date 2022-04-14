#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int key = 1;
    string plaintext = get_string("plaintext: ");

    string text[strlen(plaintext)];

    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        int cipherindex = ((((int) plaintext[i] - 97) + key) % 26) + 97;
        text[i] = ((char) cipherindex);
        printf("%c", (char) cipherindex);
    }
    printf("\n");
            printf("%s", text);
}