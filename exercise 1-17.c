// Exercise 1-17 of the K&R
// Write a program to print all input lines that are longer than 80 chars

// One small error with the program - First char of printed "over 80 char" line does not print.
// I believe this is because the first char is

#include <stdio.h>

#define OVER80 1
#define UNDER80 0
#define MAXLINE 500-1


int main()
{
    int linestate = UNDER80;
    int i, c, k;
    char line[MAXLINE];

    // eighty chars of dollar sign char to serve as a test length meter for writing lines
    printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    while ((k = getchar()) != EOF)
    {        
        
        while((c=getchar())!= '\n')
        {
            printf(" i = %3d\tc = %c\n", i, c);

            line[i++] = c;
            // i++
            if (i > MAXLINE)
            {
                break;
            }
        }
        // Add null delimiter to complete the char array
        line[i] = '\0';
        if (i > 80)
        {
            linestate = OVER80;
            printf("\ni is equal to %d which is over 80 so it prints\n", i);
        }
        else if (i < 80)
        {
            printf("\nLine is less than 80 chars in length so it isn't printed\n");
        }
        
        if (linestate == OVER80)
        {
            printf("\n%s\n", line);
            // Set linestate variable back to under80 in preparation for the next line
            linestate = UNDER80;
        }
        if (i > MAXLINE)
        {
            break;
        }
    }


    return 0;
}



