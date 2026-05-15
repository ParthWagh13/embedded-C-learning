#include <stdio.h>
#define TRUE 1
#define FALSE 0
int main(void)

{
	int flag=0,day1,day2,month1,month2,year1,year2;

	printf("Enter first date: ");
	scanf("%2d/%2d/%d", &day1,&month1,&year1);

	printf("Enter second date: ");
	scanf("%2d/%2d/%d", &day2,&month2,&year2);

	if (year1 < year2) {flag = TRUE;} else if (year1 > year2) {flag = FALSE;}
	else if (month1 < month2) {flag = TRUE;} else if (month1 > month2) {flag = FALSE;}
	else if (day1 < day2) {flag = TRUE;} else if (day1 > day2) {flag = FALSE;}

	if (flag == TRUE) printf("%02d/%02d/%d is earlier than %02d/%02d/%d", day1,month1,year1,day2,month2,year2);
	if (flag == FALSE) printf("%02d/%02d/%d is earlier than %02d/%02d/%d", day2,month2,year2,day1,month1,year1);

	return 0;

}
