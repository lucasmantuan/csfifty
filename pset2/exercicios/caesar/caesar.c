#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string plaintext = get_string("plaintext: ");
    int key = 1;
    //int index = (0 + key) % 26;

    int ciphertext = atoi(plaintext);

    printf("%c\n", ciphertext);
}