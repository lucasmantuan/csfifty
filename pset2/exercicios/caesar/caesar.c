#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int key = 1;
    string plaintext = get_string("plaintext: ");
    int chiperindex = ((((int) plaintext[0] - 97) + key) % 26) + 97;
    string chipertext = 

    printf("%c\n", chiperindex);
}