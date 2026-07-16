#include <stdio.h>

void print_row(int width)
{
    for (int i = 0; i < 3; i++)
    {
        printf("#");
    }
}

int main(void)
{
    const int n = 3;
    for (int i = 0; i < 3; i++){
        print_row(n);
        printf("\n");
    }
}