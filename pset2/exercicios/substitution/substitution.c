#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int index(int n);

int main(void)
{
    string key = "VcHpRzGjNtLsKfBdQwAxEuYmOi";
    string plaintext = get_string("plaintext: ");
    int size = strlen(plaintext);
    char ciphertext[size];

    for (int i = 0; i < size; i++)
    {
        int j = index(plaintext[i]);
        ciphertext[i] = key[j];
    }

    printf("%s\n", ciphertext);
    return 0;
}

// retorna o índice da letra recebida como parâmetro
int index(int n)
{
    int character = 97;
    for (int i = 0; i < 26; i++)
    {
        if (n == character)
        {
            return i;
        }
        character++;
    }
    return 1000;
}