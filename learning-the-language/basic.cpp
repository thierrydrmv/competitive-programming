#include <iostream>

int main()
{
  int n1 = 0;
  int n2 = 10;

  n1 = 10;
  n1 = n2 + n1;

  n1 += 10;
  n2 -= 2;
  n1 *= 12;
  n2 /= 2;

  std::cout << n1 << "\n"
            << n2;

  return 0;
}