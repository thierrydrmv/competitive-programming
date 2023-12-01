#include <iostream>

// string type
#include <string>

int main()
{
  // array of characters always ends with \0 informing the end of the array (size+1)
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
              << "/n";
  }
  else if (value < 18)
  {
    std::cout << "Minor"
              << "/n";
  }
  else
  {
    std::cout << "Legal age"
              << "/n";
  }

  return 0;
}