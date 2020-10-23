/*
exercise 2-4 in the K&R
write an alternative version of squeeze(s1, s2) that deletes each character in s1 that matches any character in the string s2

*/

#include <stdio.h>

// Program takes two arguments, Compares the values at index i and deletes the chars in str1 that match the chars in string two and replaces with a dash

#define NOTFOUND 0
#define FOUND 1



int main(int argc, char **argv)
{

    int i, j, k;
    int match;
    char s1[] = "michael pzx jackson";
    char s2[] = "jackson b michaels";
    char s3[20] = "";
    
    j = i = k = match = NOTFOUND;

    for (i=0;s1[i] != '\0'; ++i) // iterates through s1 string with i variable
        {
            match = NOTFOUND; // reinitialize match too boolean zero for each s1[i]
        for (j=0; s2[j] != '\0'; ++j) // iterates through s2 with j variable
        {

            if (s2[j] == s1[i]) // if match found, match set to found
            {
                match = FOUND;
                break;
            }
            else if (s2[j] != s1[i])
                match = NOTFOUND; // otherwise continue to iterate
        }
        if (match == NOTFOUND) // if notfound add to s3 and increment k
        {

        s3[k] = s1[i];
        ++k;
        }
        else if (match == FOUND) // if found do not add to s3 array and continue
        {
            continue;
        }
    }

    k++;
    s3[k] = '\0';
    printf("\n%s\n", s3);
}
