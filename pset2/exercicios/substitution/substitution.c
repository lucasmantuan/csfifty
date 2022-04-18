#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string str = "BAC";
    char ch = 'A';
    char ret;

    ret = strchr(str, ch);

    printf("%s\n", ret);

}