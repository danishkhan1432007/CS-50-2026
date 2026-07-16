#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What's the x ? ");
    int y = get_int("What's the y ? ");

    printf("%i \n", x + y);
}