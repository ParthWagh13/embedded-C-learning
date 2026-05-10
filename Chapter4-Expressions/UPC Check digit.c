#include <stdio.h>

int main(void)

{
    int one,two,three,four,five,six,seven,eight,nine,ten,eleven,first,second,third,fourth,fifth,sixth;
    printf("Enter the first(single) digit: ");
    scanf("%1d", &one);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &two,&three,&four,&five,&six);

    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &seven,&eight,&nine,&ten,&eleven);

    first = one + three + five + seven + nine + eleven;
    second = two + four + six + eight + ten;
    third = (first * 3) + 1;
    fourth = third - 1;
    fifth = fourth % 10;
    sixth = 9 - fifth;

    printf("Check digit: %d\n",sixth);

    return 0;

}
