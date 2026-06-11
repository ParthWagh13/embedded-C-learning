#include <stdio.h>

int main(void)

{
    int day,month,year;
    printf("Enter a date in the (dd/mm/yyyy) format: ");
    scanf("%d/%d/%d",&day,&month,&year);

    printf("The date in yyyymmdd format is %d%02d%02d\n",year,month,day); /* Used %02d as it indicates 2 width and padded with zero on left side*/

    return 0;
}
