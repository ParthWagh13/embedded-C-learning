#include <stdio.h>

int main(void)

{
	int a,b,c,d,max1,max2,min1,min2,large,small;

	printf("Enter 4 integers: ");
	scanf("%d %d %d %d", &a,&b,&c,&d);

	/* First compare 2 pairs of 2 numbers */
	if (a > b) {max1 = a; min1 = b;} else {max1 = b; min1 =a;}
	if (c > d) {max2= c; min2 = d;} else {max2 = d; min2 = c;}

	/* Compare the max and min to find the largest and smallest */
	if (max1 > max2) {large = max1;} else {large = max2;}
	if (min1 < min2) {small = min1;} else {small = min2;}

	printf("The largest integer is: %d\n", large);
	printf("The smallest integer is: %d\n", small);

	return 0;
}
