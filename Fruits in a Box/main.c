#include <stdio.h>
#include <stdlib.h>

int main()
{
    int apples = 13;
    int bananas = 12;
    int fruits = apples + bananas;

    printf("There is a box which containts:\n");
    printf("\t%d apples\n", apples);
    printf("\t%d bananas\n", bananas);
    printf("So in total there are %d fruits in that box.\n", fruits);

    return EXIT_SUCCESS;
}