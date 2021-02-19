// Exercise 1-8 from the K&R
// "Write a program to count blanks, tabs, and newlins"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c; 
    int nl, t, s = 0;
    
    while((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
            printf("|----------------------|\n");
            printf("| \\n  |  tab  |  Space |\n");
            printf("|-----|-------|--------|\n");
            printf("| %3d |  %3d  |  %3d   |\n", nl, t, s);
            printf("|----------------------|\n");

        }
        else if ( c == '\t')
        {
            ++t;
        }
        else if ( c == ' ')
        {
            ++s;
        }
    }

    return 0;
}