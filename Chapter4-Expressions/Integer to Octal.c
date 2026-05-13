#include <stdio.h>

int main(void)

{
    int n1,n2,n3,n4,d1,d2,d3,d4,d5,digit;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&digit);

    d1 = digit % 8;
    n1 = digit / 8;
    d2 = n1 % 8;
    n2 = n1 / 8;
    d3 = n2 % 8;
    n3 = n2 / 8;
    d4 = n3 % 8;
    n4 = n3 / 8;
    d5 = n4 % 8;

    printf("The octal form is %1d%1d%1d%1d%1d", d5,d4,d3,d2,d1);

    return 0;

}
