// exercise 2-4 in the K&R



#include <stdio.h>

// Program takes two arguments, Compares the values at index i and deletes the chars in str1 that match the chars in string two and replaces with a dash
int main(int argc, char **argv) {
    int i;

while (argv[1][i] != '\0') {
    if (argv[1][i] == argv[2][i]) {
        argv[1][i] = '-';
    }
    ++i;
    }
    printf("string one: %s\n", argv[1]);
    printf("string two: %s\n", argv[2]);

}







