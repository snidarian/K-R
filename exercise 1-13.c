// exercise 1-13
// write a program to print a histogram of the lengths of words in its input.

#include <stdio.h>

#define OUT 0
#define IN 1


int main()
{
    int state = OUT;
    int c, j, k;
    int i = 0;

    int wordlen = 0;
    int inputlengths[40];

    while ((c = getchar()) != EOF)
    {
        
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state == OUT;
            
            inputlengths[i] = wordlen;
            
            i++;
            //printf("i = %d\n", i);

            wordlen = 0;
        }
        else
        {
            state == IN;
            wordlen++;
            //printf("%d ", wordlen);
        }
        
    }

    printf("|---------------------------------------\n");
    printf("|_______________________________________\n");
    printf("|word No.|     Chars  \n");
    for (j=0; j < i; j++)
    {
        
        printf("| %3d    | %3d chars = ", j, inputlengths[j]);
        for(k=0; k < inputlengths[j]; k++)
        {
            printf("#");
        }
        printf("\n");
    }

    printf("|---------------------------------------\n\n");
    // Some sort of graphing mechanism goes here to graphically (in a fashion) show word lengths


    return 0;

}








