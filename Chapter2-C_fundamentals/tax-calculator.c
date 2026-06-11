#include <stdio.h>
#define TAX_PERCENT 0.05f

int main(void)
{
    double amount,tax,dollars;

    printf("Write the value in dollars and cents: ");
    scanf("%lf", &dollars);

    tax = dollars * TAX_PERCENT;
    amount = dollars + tax;
    printf("the amount with taxes is %g", amount );
    return 0;
}
