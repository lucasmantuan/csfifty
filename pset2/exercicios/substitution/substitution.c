#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char str[] = "lacas";

    str[1] = 'b';

    printf("%s\n", str);
}