#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char str[] = "lucas";
    char ch = 'a';
    char *ret;
    int i = 1;

    ret = strchr(str, ch);

    printf("%d\n", (ret - str + 1));

}