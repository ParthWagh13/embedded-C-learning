#include <stdio.h>
#define SCALAR_FACTOR (5.0f/9.0f)        /*This is the part which is multiplied*/
#define FREEZING_PT 32.0f                /*  This part is subtracted from fahrenheit*/

int main(void)
{
    float fahrenheit,celsius;

    printf("Enter the value of temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALAR_FACTOR;

    printf("The value in celsius is %.1f\n", celsius);

    return 0;
}
