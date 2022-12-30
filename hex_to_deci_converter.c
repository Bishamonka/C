#include <stdio.h>

int main()
{
  printf("\n======================================\n\n");
  printf("Welcome to 'Hex to Deci Converter'\n");
  printf("Enter a number: \n");

  int the_number;
  scanf("%d", &the_number);
  
  printf("Decimal representation:     %9d\n", the_number);
  printf("Hexadecimal representation: %9x\n", the_number);
  
  printf("\n======================================\n");

  return 0;
}
