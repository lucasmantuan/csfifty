#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string str = "lacas";

    str[1] = 'b';

    printf("%c\n", str[1]);
}