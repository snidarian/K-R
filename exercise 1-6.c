// exercise 1-6 from chapter 1 of the K&R
// Exercise 1-6 "Verify that the expression getchar() != EOF is 0 or 1"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;

    {
        printf("%d", c = getchar() != EOF);
    }

    return 0;
}

// The above program prints 1 whenever any char is entered as input and return is pressed.
// It returns 0 whenever the EOF 'end of file' character is given as input.






