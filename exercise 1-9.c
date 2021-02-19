// Exercise 1-9 of the K&R
// "Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank"

#include <stdio.h>
#include <stdlib.h>

// By state changes you can signify to the program whether it is in or out of a word (whether to print and extra space or not)
#define OUT 0
#define IN 1

// I used the below printf() statments to verify that "state" variable was changing as intended.

int main()
{
    int c;
    // state - whether in or out of a word
    int state;
    state = IN;

    while((c = getchar()) != EOF)
    {
        if ((c == ' ') && (state == IN))
        {
            putchar(c);
            state = OUT;
            //printf("|OUT|");
        }
        else if (c != ' ')
        {
            putchar(c);
            state = IN;
            //printf("|IN|");
        }
        
    }

    return 0;
}





