#include <iostream>

int main()
{
  int number = 10;
  // has a maximum index size that can break the application (UINT_MAX)
  unsigned int noNegative = 12;
  float numberF = 0.0f;
  double numberD = 0.0;

  bool boolean = true;
  char character = 't';

  // int that cannot be negative, usually used in array index or loops;
  size_t syze = 0;

  std::cout
      << number << "\n"
      << noNegative << "\n"
      << numberF << "\n"
      << numberD << "\n"
      << boolean << "\n"
      << character << "\n"
      << syze << "\n";

  return 0;
}