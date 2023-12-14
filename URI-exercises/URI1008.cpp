#include <iostream>

int main()
{
  int id, wh;
  float hw;
  scanf("%d", &id);
  scanf("%d", &wh);
  scanf("%f", &hw);
  printf("NUMBER = %d\n", id);
  printf("SALARY = U$ %.2f\n", wh * hw);

  return 0;
}