#include <stdio.h>

int main(void)

{
    int item,month,day,year;
    float price;

    printf("Enter item no: ");
    scanf("%d",&item);

    printf("Enter unit price: ");
    scanf("%f",&price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t%.2f\t%02d/%02d/%d\n",item,price,month,day,year);

    return 0;
}
