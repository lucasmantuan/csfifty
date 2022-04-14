#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    string plaintext = get_string("plaintext: ");
    int key = 1;
    //int index = (0 + key) % 26;

    int index = ((((int) plaintext[0] - 97) + key) % 26) + 97;

    string chipertext = "";
    chipertext[0] = (char) index;

    printf("%s\n", chipertext);
}