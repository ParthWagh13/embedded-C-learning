#include <stdio.h>

int main(void)

{
    int value;
    float commission;
    printf("Enter value of trade: ");
    scanf("%d", &value);

    if (value > 500000){
        commission = 255 + (0.09 * value)/100;
    }else if (value > 50000){
        commission = 155 + (0.11 * value)/100;
    }else if (value > 25000){
        commission = 100 + (0.22 * value)/100;
    }else if (value > 6250){
        commission = 76 + (0.34 * value)/100;
    }else if (value > 2500){
        commission = 56 + (0.66 * value)/ 100;
    }else if (value < 2500){
        commission = 30  + (value * 1.7)/100;
    }if (commission < 39){
        commission = 39;
    }

    printf("The commission is $%.2f", commission);

    return 0;
}
