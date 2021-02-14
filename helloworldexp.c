/*
Exercise 1-2 of the K&R
Experiment to find out what happens when prints 's argument string contains \c, where c is some character not listed above.
*/

#include <stdio.h>

int main()
{
    printf("Hello, ");
    printf("world.");
    printf("\n");

    return 0;
}

/*
Following escape sequences and what I observed:
"\n" - Started the terminal prompt after running program on the following line
"\a" - no observable effect 
"\b" - cut the last character, the period off of "hello, world." so it became "hello, world"
"\f" - Tantamount to pressing 'return key'
"\r" - no observable effect
"\t" - Tantamount to pressing tab key. Create a tab space at the end of "hello, world."
"\v" - seems like the combination of '\t' and '\n'
"\\" - Makes the escape character visible in output
"\'" - prints '
"\"" - prints "
"\?" - prints ?
"\0" - no observable effect. (Already a null delimiter in string "hello, world.")


*/



















