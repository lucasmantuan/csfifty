#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    string plaintext = get_string("plaintext: ");
    int key = 1;
    //int index = (0 + key) % 26;

    int ciphertext = (int) plaintext[0] - 97;

    printf("%i\n", ciphertext);
}