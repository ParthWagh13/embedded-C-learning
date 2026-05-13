#include <stdio.h>

int main(void)

{
	int num = 0, digits = 0;
	printf("Enter a number: ");
	scanf("%d", &num);

	if (num < 10 && num >= 0) {
		digits = 1;
	} else if (num >= 10 && num < 100) {
		digits = 2;
	} else digits = 3;

	printf("The number %d has %d digits", num, digits);

	return 0;
}
