#include <iostream>

int main()
{
  char name[80];
  float fs, st;
  scanf("%s", name);
  scanf("%f", &fs);
  scanf("%f", &st);
  printf("TOTAL = R$ %.2f\n", fs + st * 0.15);

  return 0;
}