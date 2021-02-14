// exercise 1-1


#include <stdio.h>

int main()
{
  printf("hello, ");
  printf("world");
  printf("\n");
  
  return 0;
}


/*

What happens when you leave out individual parts of this hellow world program?

"return 0;" - nothing happens as the main function implcitly returns 0 without needing it written.
"int" return type in main function - Nothin happened in the program but the compiler raised a warning
";" after printf function call - Would not compile due to "Error: expected ';' before 'printf'
"#include <stdio.h>" - Raised warning but program still functioned as originally intended.

