#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name: ");
    printf("After: ");
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        printf("%c",toupper(name[i]));
    }
    printf("\n");
}