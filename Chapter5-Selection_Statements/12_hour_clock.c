#include <stdio.h>

int main(void)

{
	int newhour , hours , minutes;
	printf("Enter a 24 hour time: ");
	scanf("%d:%d", &hours, &minutes);

	newhour = hours - 12;

	printf("Equivalent 12-hour time: ");

	if (newhour > 0){
		printf("%d", newhour);
	}else
		printf("%d", hours);


	printf(":%d\n", minutes);

	return 0;
}
