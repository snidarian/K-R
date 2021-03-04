// Exercise 1-19 from the K&R
// Write a function reverse() that reverses ths character string s. Use it to write a program that reverses its input a lint at a time


#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

char s[MAXLINE];


int reverse_string(int len)
{
    int i;
    char temp_array[MAXLINE];

    for(i = len; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}


int main()
{
    int c, i;
    int len;

    while ((c = getchar()) != EOF)
    {
        // This little bit of trickery is necessary as first 'c' val is used to evaluate outer while loop.
        len = 1;
        i = 0;
        s[i] = c;
        i = 1;
        while((c = getchar()) != '\n')
        {
            s[i] = c;
            len++, i++;
            //printf("len = %d\n", len);
        }
        s[++i] = '\0';

        printf("====================================\n");
        printf("BEFORE:\n");
        for(i=0; i < len; i++)
        {
            printf("%c", s[i]);
        }
        printf("\n------------------------------------\n");
        printf("AFTER:\n");
        reverse_string(len);
        printf("====================================\n");
        len = 0;
    // reinitialize the array to zero
        for(i=0; i < len; i++)
        {
            s[i] = 0;
        }
        
    }
    return 0;

}














