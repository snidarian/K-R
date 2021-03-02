// Exercise 1-18 from the K&R
// "Write a program to remove trailing blanks and tabs from each line of input and to delete entirely blank lines"

#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLEN 1000

int main()
{
    int c, i;
    char line[MAXLEN];
    int state = OUT;


    while ((c = getchar()) != EOF)
    {   
        i = 0;
        while ((c = getchar()) != '\n')
        {
            // if c == blank or tab and state is OUT, dont add c to char array
            if (c == '\t' || c == ' ' && state == OUT)
            {
                ;
            }
            // if the space or tab is a normal space or tab, then add it to the char array
            else if (c == '\t' || c == ' ' && state == IN)
            {
                line[i++] = c;
                state = OUT;
                //printf("\nstate set to out\n");
            }
            // else statement is normal functioning where chars are automatically added to the char array
            else
            {
                printf("%3d\t%c\n", i, c);
                line[i++] = c;
                state = IN;
            }
            

        }
        
        
        line[i] = '\0';

        printf("Line = %s\n", line);
        // reinitialize the line to empty

    }

    return 0;

}















