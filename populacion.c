#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a,b,y;
    
    // TODO: Prompt for start size
    do
    {
            a=get_int("Start size:");
    }
    while (a < 9);
    // TODO: Prompt for end size
    do
    {
            b=get_int("End size:");
    }
    while (b < a);
    // TODO: Calculate number of years until we reach threshold
    for (y = 0; a < b ;y++)
    {
            a=a+(a/3)-(a/4);
    }

    // TODO: Print number of years
    printf ("It will take %i years\n", y);
}
