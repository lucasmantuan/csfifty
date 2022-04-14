#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int key = 1;
    string plaintext = get_string("plaintext: ");
    string chipertext = plaintext;
    int chiperindex = ((((int) plaintext[0] - 97) + key) % 26) + 97;

    chipertext[0] = (char) chiperindex;

    printf("%s\n", chipertext);
}