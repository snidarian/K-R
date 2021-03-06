// This program is specified by Exercise 1-22 of the K&R Ansi edition
/* Exercise 1-22. Write a program to ``fold'' long input lines into two or more shorter lines after
the last non-blank character that occurs before the n-th column of input. Make sure your
program does something intelligent with very long lines, and if there are no blanks or tabs
before the specified column. */

// I'm very pleased the way this program turned out. It is among the fewest lined 
// examples of this exercise that I've seen and I did it without looking at anyone elses work beforehand
// The accomplishes the original goal and uses the least amount of variables and bloat I think is possible (at least for my current skill level.)


#include <stdio.h>

#define MAXINPUTLINELEN 30
int c, i;
char CurrentInputLine[500];
int LOOKINGFORBREAK = 0;


int main() {
i = 0;


while ((c = getchar()) != EOF && c != '\n') { // The program ends when you hit return (\n)
    CurrentInputLine[i] = c;

    if ( i % MAXINPUTLINELEN == 0 && i != 0) {
         LOOKINGFORBREAK = 1;

    }   
    if (LOOKINGFORBREAK == 1 && CurrentInputLine[i] == ' ') {
        ++i;
        CurrentInputLine[i] = '\n';
        LOOKINGFORBREAK = 0;
    }
    ++i;
}

++i;
CurrentInputLine[i] = '\0';
printf("%s\n", CurrentInputLine);


}

