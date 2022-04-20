#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string plaintext = get_string("String: ");

    printf("%s\n", plaintext);
}