// Exercise 1-4 from the K&R
// "Write a program to print the corresponding Celsius to Fahrenheit table."

#include <stdio.h>


int main()
{
    float fahr, cel;
    float lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;

    printf("|  C  |   F    |\n");
    printf("|_____|________|\n");

    while (cel <= upper)
    {
        fahr = ( (cel * 1.8) + 32.0);
        printf("| %3.0f | %3.2f   |\n", cel, fahr);
        cel += step;
    }

printf("-----------------\n");

}












