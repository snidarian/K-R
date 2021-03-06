// exercise 1-20 of the K&R.
// This program replaces tabs in the input with the proper number of blanks
// the ratio of spaces to tabs is 4:1
// It works as intended, even if I did add some unsolicited functionality to it.

#include <stdio.h>
#define TABDIVISOR 4

int main() 
{

    int numberOfTabs = 0;
    int numberOfSpaces = 0;
    char currentLine[300];
    int currentLineIndex;
    int c;

    while ((c=getchar()) != EOF) 
    {

        if (c == '\t') {
        numberOfTabs += 1;
        for (int j = 0; j < TABDIVISOR; ++currentLineIndex, ++j)
        {
            currentLine[currentLineIndex] = ' '; }
        }
        else if (c != '\t') 
        {
            currentLine[currentLineIndex] = c;

            if (c == '\n') 
            {
                currentLine[currentLineIndex +1] = '\0';
                printf("%s\n", currentLine);
            }
            if (c == ' ') {
                numberOfSpaces += 1;
        }
        currentLine[++currentLineIndex];
        }
        
    }
        printf("Tabs\t\tSpaces to next tab:\n");
        printf(" %d\t\t\t%d\n", numberOfTabs, numberOfSpaces);
        
        return 0;
    }


