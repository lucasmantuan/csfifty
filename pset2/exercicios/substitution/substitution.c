#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int index(int n);

int main(int argc, string argv[])
{
    string key = argv[1];

    // verifica a quantidade de argumentos
    if (argc != 2)
    {
        printf("Uso: ./substitution chave\n");
        return 1;
    }

    // verifica a quantidade de caracteres da chave
    if (strlen(key) != 26)
    {
        printf("A chave deve conter 26 caracteres.\n");
        return 1;
    }

    string plaintext = get_string("plaintext: ");
    int size = strlen(plaintext);
    char ciphertext[size];

    for (int i = 0; i < size; i++)
    {
        // verifica se é uma letra
        if (isalpha(plaintext[i]))
        {
            // verifica se é maiuscula
            if (isupper(plaintext[i]))
            {
                // substitui a letra e converte para maiuscula
                int j = index(tolower(plaintext[i]));
                ciphertext[i] = toupper(key[j]);
            }
            else
            {
                // substitui a letra mas não converte para maiuscula
                int j = index(plaintext[i]);
                ciphertext[i] = tolower(key[j]);
            }
        }
        else
        {
            // por não ser uma letra não faz a substituição
            ciphertext[i] = plaintext[i];
        }
    }

    printf("ciphertext: %s\n", ciphertext);

    // printf("ciphertext: ");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%c", ciphertext[i]);
    // }
    // printf("\n");

    return 0;
}

// retorna o índice da letra recebida
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