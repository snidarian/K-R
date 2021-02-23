// Exercise 1-12 from the K&R
// "How would test the word count program? What kinds of input are most likely to uncover bugs if there are any?"



#include <stdio.h>
#define IN 1
#define OUT 0

/* inside a word */
/* outside a word */
/* count lines, words, and characters in input */
int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) 
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) 
        {
            state = IN;
            ++nw;
        }
    }
    printf(" NL  NW  NC\n");
    printf(" %d   %d  %d\n", nl, nw, nc);
}


// Program seems sound and is free from any observable bugs.



