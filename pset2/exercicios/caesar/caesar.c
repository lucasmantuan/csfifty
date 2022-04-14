#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string plaintext = get_string("plaintext: ");
    int key = 1;
    int index = (0 + key) % 26;

    int ciphertext = (int) plaintext[index] + key;

    printf("%i\n", index);
    printf("%c\n", (char) ciphertext);
}