// Exercise 1-5 from the K&R
// "Modify the temperature conversion program to print the table in reverse order
//that is, from 300 degrees to 0."

#include <stdio.h>


int main()
{
    float fahr, cel;
    float lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;
    cel = 150;

    printf("|  C  |   F    |\n");
    printf("|_____|________|\n");

    while (cel >= lower)
    {
        fahr = ( (cel * 1.8) + 32.0);
        printf("| %3.0f | %3.2f   |\n", cel, fahr);
        cel -= step;
    }

printf("-----------------\n");

}