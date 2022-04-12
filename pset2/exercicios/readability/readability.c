#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void) {
    string text = get_string("Text: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        printf("%c\n", text[i]);
    }
}