#include <stdio.h>

int main(void)
{
    int height,length,breadth,volume,weight;
    printf("The value of height is ");
    scanf("%d", &height);

    printf("The value of length is ");
    scanf("%d", &length);

    printf("The value of breadth is ");
    scanf("%d", &breadth);

    volume = length * breadth * height;
    printf("The volume is %d\n", volume);

    weight = (volume + 165)/166;
    printf("The dimensional weight is %d\n", weight);

    return 0;
}
