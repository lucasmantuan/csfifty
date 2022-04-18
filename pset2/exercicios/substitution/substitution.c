#include <stdio.h>
#include <cs50.h>
#include <strings.h>

int main(void)
{
    string text = "AAA";
    string key = "B";

    char t = strchr(text, "A");
    printf("%c\n", t);

}