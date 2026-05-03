#include <stdio.h>
#define TAX_PERCENT 0.05f

int main(void)
{
    float amount,tax,dollars;

    printf("Write the value in dollars and cents: ");
    scanf("%f", &dollars);

    tax = dollars * TAX_PERCENT;
    amount = dollars + tax;
    printf("the amount with taxes is %.2f", amount );
    return 0;
}
