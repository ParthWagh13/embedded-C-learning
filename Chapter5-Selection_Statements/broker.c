 #include <stdio.h>

int main(void)

{
    int number;
    float value, shares, rivalcommission, commission;

    printf("Enter the number of shares: ");
    scanf("%d", &number);

    printf("Enter the price per share: ");
    scanf("%f", &shares);

    value = number * shares;
    printf("The value of the shares is %f\n" , value);

       /* Original broker's commission*/

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
    }else if (value <= 2500){
        commission = 30.0f  + (value * 1.7f)/100.0f;
    }if (commission < 39){
        commission = 39;
    }

      /* Rival Broker's Comission */

    if (number < 2000) {
	rivalcommission = 33.00f + (0.03f * shares);
    }else if (number >= 2000){
	rivalcommission = 33.00f + (0.02f * shares);
    }


    printf("The commission is $%.2f\n", commission);
    printf("The commission of rival broker is $%.2f\n" , rivalcommission);

    return 0;
}
