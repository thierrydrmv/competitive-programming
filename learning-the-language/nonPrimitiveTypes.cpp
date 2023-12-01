#include <iostream>

// string type
#include <string>

void printIt()
{
  std::cout << "teste"
            << "\n";
}

int sum(int a, int b)
{
  return a + b;
}
int main()
{
  // array of characters always ends with \0 informing the end of the array (size+1)
  int newArray[10];
  char array[11] = "0123456789";
  char character = 't';
  std::string newString = "creative";

  std::cout << array << "\n"
            << character << "\n"
            << newString << "\n";

  newString += " technology";

  std::cout << newString << "\n";

  int value;

  std::cout << "Inform your age: ";
  std::cin >> value;
  if (value < 0)
  {
    std::cout << "Write a valid age!"
              << "\n";
  }
  else if (value < 18)
  {
    std::cout << "Minor"
              << "\n";
  }
  else
  {
    std::cout << "Legal age"
              << "\n";
  }

  int x = 0;

  while (x < 5)
  {
    std::cout << "\n"
              << x;
    x++;
  }

  for (int i = 0; i < 10; i++)
  {
    newArray[i] = 0;
  }

  // returns the space in memory of the array
  std::cout << newArray << "\n";
  printIt();
  std::cout << sum(1, 2) << "\n";
  return 0;
}