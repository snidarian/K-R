// exercise 1-1 in the K&R
// Write hello world program and then create errors in it by removing
// various basic necessities in the program
// obviously program takes one argument

#include <stdio.h>

int main(int argc, char **argv)
{
printf("Hello, %s!\n", argv[1]);
}
