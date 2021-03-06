/* Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum
number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab .
When either a tab or a single blank would suffice to reach a tab stop, which should be given
preference? */

#include <stdio.h>

#define TabsToaBlank 1:4
#define BlanksToaTab 4:1

int number_of_tabs, number_of_spaces;
int spaces_required;
int tabs_required;

int main () 
{
    int c;

while ((c=getchar()) != EOF && c != '\n') 
{
    if (c == ' ') 
    {
        ++ number_of_spaces;
    }

}

spaces_required = number_of_spaces % 4;
tabs_required = number_of_spaces / 4;

printf("%d Spaces Required\n", spaces_required);
printf("%d Tabs Required\n", tabs_required);

// So we can see the effect being put to std out, I replaced regular tabs with 'tab-' and spaces with 's'
// Notice that 'tab-' is four character spaces like a regular tab and also that 's' is one space just like a ' '

for (int i = 0; i < tabs_required; ++i) 
{
    printf("tab-");
}

for (int j = 0; j < spaces_required; ++j) 
{
    printf("s");
}

printf("\n");


return 0;
}





