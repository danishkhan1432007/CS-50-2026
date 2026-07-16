#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("what's the x ? ");
    int y = get_int("what's the y ? ");
    printf("%f \n", (float)x/y);
}