#include <stdio.h>

int main(void)

{
    int number,hundreds,tens,tens1,units;

    printf("Enter a three-digit number: ");
    scanf("%d",&number);

    hundreds = number/100;
    units = number % 10;
    tens = number/10;
    tens1 = tens%10;

    printf("The reversal is %d%d%d", units,tens1,hundreds);

    return 0;
}
