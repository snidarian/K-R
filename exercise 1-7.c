// Exercise 1-7 from the K&R
// "Write a program to print the value of EOF"

#include <stdlib.h>
#include <stdio.h>


int main()
{
    int c;

// the below code returns what I believe to be the EOF character on my system "�"
// It just displays the character as a question mark encased in a hexagon

    c = getchar();
    
    putchar(c);
    
    printf("\n");

/*
    You might think that you can get the EOF character with the below code but what I believe it returns is just a negative one from the getchar() function call

    c = EOF;
    printf("%d\n", c);

*/
    return 0;
}


