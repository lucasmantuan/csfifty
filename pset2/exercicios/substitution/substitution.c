#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char str[] = get_char("String: ");

    str[1] = 'b';

    printf("%s\n", str);
}