/*
This file satisfies two requirements. It is a useful Exercise (2-1) in the K&R and It is a field reference for the capabilities for limits.h 
Exercise 2-1. Write a program to determine the ranges of char , short , int , and long
variables, both signed and unsigned , by printing appropriate values from standard headers
and by direct computation. Harder if you compute them: determine the ranges of the various
floating-point types. 
*/

// I'm creating this as a sort of reference file for data type info and refresher info on the <limits.h> header


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("CHARS\n-------------------------------\n");
    printf("Maximum of a signed Char   :   %d\n", SCHAR_MAX);
    printf("Minimum of a signed Char   :   %d\n", SCHAR_MIN);
    printf("Maximum of an unsigned Char   :   %d\n", UCHAR_MAX);
    // The minimum of an unsigned data type is always ZERO so writing the MIN of UCHAR is pointless.

    printf("CHAR_BIT    :   %d\n", CHAR_BIT); // A regular Char is one byte (8 bits obviously)
    printf("CHAR_MAX    :   %d\n", CHAR_MAX); // 
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    
    printf("\nINTEGERS\n------------------------------\n");
    printf("INT_MAX     :   %d\n", INT_MAX); // Integers reach positively and negatively to 2147483648 (unsigned integers get an extra bit making it 32bits (2^32))
    printf("INT_MIN     :   %d\n", INT_MIN); // Regular integers (depending on host machine) are 32 bit numbers (31 bits and one bit for the +/- sign)
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX); // Regular long ints (which are signed) can reach +/-9223372036854775807 (63 bits plus one for the sign)
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN); 

    printf("Short integers ");
    printf("SHRT_MAX    :   %d\n", SHRT_MAX); // Short integers have a min and max of + or - 32768
    printf("SHRT_MIN    :   %d\n", SHRT_MIN); 

    printf("\nUNSIGNED regular, short and long integers. \n");
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX); // 
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX); // Long unsigned are the largest single data type with a max of 18446744073709551615 which is 2^64 (64 bit number)
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX); // Unsigned short integers go to about 65k (again with a min value of ZERO)


    printf("MB_LENMAX :    %d\n", MB_LEN_MAX); // Defines the max number of bytes in a multi-byte character

    







    return 0;
}
