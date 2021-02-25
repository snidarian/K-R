// Exercise 1-14 from the K&R
// "Write a program to print a histogram of the frequencies of different characters in its input"

#include <stdio.h>


// intialize array that will store the frequency of each char entered
int charfreq[128];


int main()
{
    int c, i, j;
    // initialize all values in the array to zero
    for(i=0;i<128;i++)
    {
        charfreq[i] = 0;
    }
        
    while((c = getchar())!= EOF)
    {
        // index is int value of c itself incrementing the value in charfreq at [c] index location for each successive press
        charfreq[c]+= 1;
    }

    printf("______________________________________________________________\n\n");
    // 32 is beginning of printable ascii characters. 128 = delete key but left it at 128.
    for(i=32;i<128; i++)
    {
        // Only mention chars in output if they were pressed at least once. Otherwise assume their value to be zero
        if (charfreq[i] > 0)
        {
        printf("%c occurred %3d times\n", i, charfreq[i]);
        }
    }

    printf("\n");
    printf("=========================================================\n\n");

    printf("CHAR FREQUENCY HISTOGRAM:\n\n");
    // This for loop will iterate all the way from 32 to 127 and print #'s based on char frequency
    for(i=32;i<127; i++)
    {
        
        if (charfreq[i] > 0)
        {
            printf("%c - ", i);

            // At first I used a nested for loop instead to iterate with the j variable. But the strangest thing kept happening
            // j kept being set exactly to the value in charfreq array at index [i]. It's still unexplicable to me why it happened
            j = 0;
            while(j < charfreq[i])
            {
                
                printf("#");
                
                j++;
            }
                printf("\n\n");
        }
    }
    printf("============================================================\n");

    return 0;

}







