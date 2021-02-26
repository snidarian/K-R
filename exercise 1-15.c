// Exercise 1-15 from the K&R
// "Rewrite the temmperature conversion program of section 1.2 to use a function for conversion"


#include <stdio.h>


float f_to_c(float f_temp)
{
    float cel_val;

    cel_val = ((5.0/9.0) * (f_temp - 32));
    return cel_val;

}

int main()
{
    int fahr;
    fahr = 0;
    int upper, lower, step;

    lower = 32;
    upper = 212;
    step = 10;

    printf("|  F  |   C  |\n");
    printf("|-----|------|\n");
    
    while ( fahr < upper)
    {
        
        printf("|%3d = %3.2f|\n", fahr, (f_to_c(fahr)));
        fahr += step;
    }


    return 0;
}

