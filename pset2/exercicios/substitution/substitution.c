#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string str = "lacas";
    char ch = 'b';

    if (str[1] == 'a')
    {
        str[1] = 'b';
    }

    printf("%s", str);
}