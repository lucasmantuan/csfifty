#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string plaintext = get_string("plaintext: ");
    int key = 1;
    int ciphertext = (int) plaintext[0];

    printf("%i\n", ciphertext);
}