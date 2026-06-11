#include <stdio.h>

int main(void)

{
    int num1,num2,den1,den2,num3,den3;

    printf("Enter first fraction: ");
    scanf("%d/%d",&num1,&den1);

    printf("Enter second number: ");
    scanf("%d/%d",&num2,&den2);

    num3 = num1*den2 + num2*den1;
    den3 = den1 * den2;
    printf("The addition of both fractions is %d/%d",num3,den3);

    return 0;
}
