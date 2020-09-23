// 2.3 - Constants from the K&R

// This file will act as a ref file (for my own persoanl edification and reference)
// for the float.h header that displays various platform depend constants related to floating point values

#include <stdio.h>
#include <float.h>

int main() {

// A floating point number has four components involved in its calculation:
// it's sign (s), Base or radix (2 for binary) (b), an exponent (e), Precision (p) the number of base-b digits in the significand


// The below code is how deconstruction of how floating point numbers are calculation
float s, p, e, b, result_exp;


double Floating_point;
s = 1;
p = 1;
e = 3;
b = 2;
result_exp = b;

// This while statement works out the exponent bit of the equation
while (e != 0) {
    result_exp *= b;
    --e;
}

Floating_point = (s) * (p) * (result_exp);


printf("\n%f\n", Floating_point); // Result 16.000000 as expected


// Library floating point value limits (FLT refers to type float, DBL to doulb, and LDBL to long double)

    // max and min float values
    printf("%.10e\n", FLT_MAX);
    printf("%.10e\n", FLT_MIN);
    //number of digits in the number
    printf("%.10d\n", FLT_MANT_DIG);

}








