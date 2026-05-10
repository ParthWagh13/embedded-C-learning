#include <stdio.h>

int main(void)

{
    int number,tens,units;

    printf("Enter a two-digit number: ");
    scanf("%d",&number);

    units = number % 10;
    tens = number/10;

    printf("The reversal is %d%d", units,tens);

    return 0;
}
