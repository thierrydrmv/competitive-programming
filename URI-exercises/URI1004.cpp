#include <iostream>
#include <stdio.h>

int main()
{
  int A;
  int B;

  printf("Write the first number: \t");
  scanf("%d", &A);
  printf("Write the second number: \t");
  scanf("%d", &B);
  int product = A * B;
  printf("PROD = %d\n", product);

  return 0;
}