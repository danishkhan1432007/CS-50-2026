#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int dollar = 1;
    while (true)
    {
        char c = get_char("Here is $%i . Double it and give it to next person .",dollar);
        if (c == 'y')
        {
            dollar *= 2;
        }
        else 
        {
            break;
        }
    }
    printf("Here is $%i .", dollar);
}