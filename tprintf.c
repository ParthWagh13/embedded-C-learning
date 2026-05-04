/* Prints int and float value in various forms
   the program is present just to understand spaces while using conversion specifiers */

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 830.29f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i,i,i,i);
    printf("|%10.3f|%10.3e|%-10g|\n", x,x,x);

    return 0;
}

