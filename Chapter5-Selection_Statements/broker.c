#include <stdio.h>

int main(void)

{
    int value;
    float commission;
    printf("Enter value of trade: ");
    scanf("%d", &value);

    if (value > 500000){
        commission = 255.00f + (0.09f * value)/100.00f;
    }else if (value > 50000){
        commission = 155.00f + (0.11f * value)/100.00f;
    }else if (value > 25000){
        commission = 100.00f + (0.22f * value)/100.00f;
    }else if (value > 6250){
        commission = 76.00f + (0.34f * value)/100.00f;
    }else if (value > 2500){
        commission = 56.00f + (0.66f * value)/ 100.00f;
    }else if (value >= 2500){
        commission = 30.0f  + (value * 1.7f)/100.0f;
    }if (commission < 39){
        commission = 39;
    }

    printf("The commission is $%.2f", commission);

    return 0;
}
