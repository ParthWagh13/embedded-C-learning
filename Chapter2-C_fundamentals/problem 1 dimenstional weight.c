#include <stdio.h>

int main (void)
{
    int height,breadth,length,volume,weight;
    height = 8;
    breadth = 10;
    length = 12;
    volume = height*breadth*length;
    weight = (volume + 165)/ 166;
    printf("Dimensions = %d x %d x %d\n",length,breadth,height);
    printf("Volume = %d\n",volume);
    printf("Dimensional weight = %d\n", weight);
    return 0;
}
