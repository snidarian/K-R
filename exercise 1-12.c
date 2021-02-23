// Exercise 1-12 from the K&R
// "Write a program that prints its input to its output one word per line"


#include <stdio.h>
#include <stdlib.h>


int main()
{

    int c;

    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            putchar('\n');
        }
        else
        {
            putchar(c);
        }
        
    }


    return 0;
}








