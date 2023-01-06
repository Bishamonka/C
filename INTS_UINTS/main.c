#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    unsigned students = 25U;
    unsigned long worldPopulation = 8008268108UL;

    printf("%16u | Stidents in class\n", students);
    printf("%16lu | World population now\n", worldPopulation);

    uint8_t count = UINT8_MAX;
    printf("%16u | Max value of UINT_8\n", count);

    count = count + 1;
    printf("%16u | Previous value increaed on 1 (OVERFLOW)\n", count);

    printf("%16d | Min value of signed INT_32\n", INT32_MIN);
    printf("%16d | Min value of signed INT_32\n", INT32_MAX);
    printf("%16u | Max value of unsighned INT_32\n", UINT32_MAX);

    printf("%16d | Min value of signed INT_8\n", INT8_MIN);
    printf("%16u | Max value of signed INT_8\n", INT8_MAX);

    printf("\n\nBishamon Dev.\n\n");
    return EXIT_SUCCESS;
}
