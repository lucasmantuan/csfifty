#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    printf("%s\n", key);

    // verificar a quantidade de parâmetros informados
    if (argc > 2)
    {
        return printf("Usage: ./caesar key\n");
    }

    // verifica se o parâmetro digitado é um número
    if (!isdigit(atoi(key)))
    {
        return printf("Usage: ./caesar key\n");
    }

    // solicita o texto para conversão
    string plaintext = get_string("plaintext: ");

    // para cada letra informada...
    printf("ciphertext: ");
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        // ...verifica se é uma letra e...
        if (isalpha(plaintext[i]))
        {
            // ...aplica a fórmula para conversão
            int cipherindex = ((((int) plaintext[i] - 97) + atoi(key)) % 26) + 97;
            printf("%c", (char) cipherindex);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}