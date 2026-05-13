#include <stdio.h>

int main(void)

{
    int final_temp;
    float temp;

    printf("The original temperature is: ");
    scanf("%f", &temp);

    temp += 10;
    temp -= 1.2f;
    temp *= 2;
    temp /= 2;

    final_temp = temp;
    printf("The final temperature is %d", final_temp);

    return 0;
}
