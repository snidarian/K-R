// Exercise 1-10 of the K&R
/* "Write a program to copy its input to its output, replacing each tab by \t , each
backspace by \b , and each backslash by \\ . This makes tabs and backspaces visible in an
unambiguous way." */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    
    while((c = getchar()) != EOF)
    {
        if ((c == '\t'))
        {
            if (c == '\t')
            {
                putchar('\\');
                putchar('t');
            }
        }
        // Couldn't get \b to register. I think because the Shell doesn't allow backspace to be an input chararacter.
        // this option can't work since shell doesn't send backpace char to program as valid input.
        else if (c == '\b')
            {
                putchar('\\');
                putchar('b');
            }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
    }
    return 0;
}
















