#include <stdio.h>
#define MAXLINE 1000

/*
The main problem I had with writing this bit:

the name 'getline' for a function is already taken by a function in the stdlibrary so when I used
the name getline() instead of what I'm using now 'grabline()' I got an namespace conflict error.

*/

// Name revised from getline() to grabline() due to naming conflict with stdlib header
int grabline(char line[], int maxline);
void copy(char to[], char from[]);


int main()
{
    int len; // current line length
    int max; // maximum length so far
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // longest line saved here

    max = 0;
    while ((len = grabline(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
        if (max > 0)
        {
            printf("Longest line: %s\n", longest);
            printf("The length of this line is %d chars\n", max);
        }
    }

    return 0;

}

int grabline(char s[], int lim)
{
    int c, i;

    for (i=0; i < lim-1 && ( c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
        if (c == '\n')
        {
            s[i] = c;
            ++i;
        }
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from [])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
