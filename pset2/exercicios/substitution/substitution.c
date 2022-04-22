#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string key = "VcHpRzGjNtLsKfBdQwAxEuYmOi";
    string plaintext = get_string("plaintext: ");
    int size = strlen(plaintext);
    char ciphertext[size];
    int character = 97;

    // percorre 26 vezes cada letra
    for (int i = 0; i < 26; i++)
    {
        if (plaintext[0] == character)
        {
            printf("%i\n", character);
            // ciphertext[i] = tolower(key[0]);
            \break;
        }
        character++;
    }

    printf("%s\n", ciphertext);
    return 0;
}