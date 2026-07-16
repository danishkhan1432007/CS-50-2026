#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string name = get_string("What is your name : ");
    int marks = get_int("How many marks you have got in the exam (total marks 500): ");
    marks = (marks * 100)/500;
    if (marks >= 90)
    {
        printf("Congratulations , %s ",name );
        printf("you have got the A+ grade \n");
    }  
    else if (marks >= 80)
    {
        printf("Congratulations , %s ",name );
        printf("you have got the A grade \n");
    }
    else if (marks >= 70)
    {
        printf("Congratulations , %s ",name );
        printf("You have got the B grade \n");
    }
    else
    {
        printf("Congratulations , %s ",name );
        printf("You have got the C grade \n");
    }
}