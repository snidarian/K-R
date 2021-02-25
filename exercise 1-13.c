// exercise 1-13
// write a program to print a histogram of the lengths of words in its input.

#include <stdio.h>

#define OUT 0
#define IN 1


int main()
{
    // State beggings in OUT -- making no assumptions about user my begin to type
    int state = OUT;
    // Three iterant values making easier and more coherent iteration
    int c, j, k;
    int i = 0;
    
    // word length will be incremented while state == IN and reset when state set to OUT
    int wordlen = 0;
    // input length is the array storing the values of the various word lengths in the sentence
    int inputlengths[40];

    // note that the control flow is constantle setting and reseting state for each char.
    // There is a way around this but I believe it's harmless and saved a great deal of likely wasted effort
    while ((c = getchar()) != EOF)
    {
        
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state == OUT;
            // input value at subscript i set to current word length
            inputlengths[i] = wordlen;
            
            i++;
            //printf("i = %d\n", i);
            // wordlength reset in anticipation of next word
            wordlen = 0;
        }
        else
        {
            state == IN;
            wordlen++;
            //printf("%d ", wordlen);
        }
        
    }
    // histogram print structure
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








