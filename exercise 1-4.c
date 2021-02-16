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

// This program produces the following output when compiled and run:
/*

$: ./exercise\ 1-4 
|  C  |   F    |
|_____|________|
|   0 | 32.00   |
|   5 | 41.00   |
|  10 | 50.00   |
|  15 | 59.00   |
|  20 | 68.00   |
|  25 | 77.00   |
|  30 | 86.00   |
|  35 | 95.00   |
|  40 | 104.00   |
|  45 | 113.00   |
|  50 | 122.00   |
|  55 | 131.00   |
|  60 | 140.00   |
|  65 | 149.00   |
|  70 | 158.00   |
|  75 | 167.00   |
|  80 | 176.00   |
|  85 | 185.00   |
|  90 | 194.00   |
|  95 | 203.00   |
| 100 | 212.00   |
-----------------
*/












