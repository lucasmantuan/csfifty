#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string key = "VCHPRZGJNTLSKFBDQWAXEUYMOI";
    string plaintext = get_string("Plaintext: ");
    char ciphertext[strlen(plaintext)];
    int character = 97;

    // percorre 26 vezes...
    for (int j = 0; j < 26; j++)
    {
        // cada uma das letras de plaintext...
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {

            // primeiro verificando se é uma letra...
            if (isalpha(plaintext[i]))
            {

                if ()
                {
                    
                }

                // e depois verificando qual é a letra...
                if (plaintext[i] == character)
                {
                    // para então fazer a substituição apropriada se for uma letra...
                    ciphertext[i] = key[j];
                }

            }
            else
            {
                // ou então manter o caractere.
                ciphertext[i] = plaintext[i];
            }

        }

    character++;
    }

    printf("Ciphertext: %s\n", ciphertext);
}