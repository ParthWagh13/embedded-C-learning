#include <stdio.h>

int main(void)

{
	int i,j;
	printf(" The value of i is ");
	scanf("%d" , &i);
	printf("The value of j is");
	scanf("%d" , &j);



	if (i<j) {
	  printf("-1");
	} else if (i == j){
	    printf("0");
  	} else
	     printf("1");
	
	return 0;
}
