#include <stdio.h>

int main(void)

{
	int area_code;

	printf("Type an area code ");
	scanf("%d", &area_code);

	printf("The area code represents ");

	switch (area_code) {
	case 229: printf("Albany"); break;
	case 404: case 470: case 678: case 770: printf("Albany"); break;
	case 478: printf("Macron"); break;
	case 706: case 762: printf("Colombus"); break;
	case 912: printf("Savannah"); break;
	default: printf("Area code not recognized."); break;
	}
	return 0;
}
