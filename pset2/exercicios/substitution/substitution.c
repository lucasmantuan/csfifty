#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char str[] = "lucas";
    char ch = 'a';
    char *ret;

    ret = strchr(str, ch);

    printf("%s\n", ret);

}