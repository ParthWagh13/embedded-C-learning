#include <stdio.h>

int main(void)
{
	int i ,digits = 0;
	printf("Enter a nonnegative integer: ");
	scanf("%d", &i);

	do {
		digits += 1;
		i = i/10;
	}
	while (i != 0);

	printf("The number has %d digit(s).\n", digits);

	return 0;
}
