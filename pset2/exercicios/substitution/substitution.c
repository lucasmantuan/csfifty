#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int qual_letra(int n);

int main(void)
{
    string key = "VcHpRzGjNtLsKfBdQwAxEuYmOi";
    string plaintext = get_string("plaintext: ");
    int size = strlen(plaintext);
    char ciphertext[size];

    int teste = qual_letra(plaintext[0]);

    printf("%c é igual \n", teste);

    // printf("%s\n", ciphertext);
    // return 0;
}

// retorna qual é a letra recebida como parâmetro
int qual_letra(int n)
{
    int character = 97;

    for (int i = 0; i < 26; i++)
    {
        if (n == character)
        {
            // ciphertext[i] = tolower(key[0]);
            return character;
        }
        character++;
    }
    return 0;
}