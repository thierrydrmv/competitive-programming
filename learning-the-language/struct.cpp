#include <iostream>
#include <string>

struct Pet
{
  // constructor for setting default values
  Pet()
  {
    name = "Pet";
    age = 0;
    weight = 1;
  }
  Pet(std::string n)
  {
    name = n;
    age = 0;
    weight = 22;
  }

  void status()
  {
    std::cout << "Name: " << name << " age: "
              << age << " weight: "
              << weight << "\n";
  }

  std::string name;
  int age;
  int weight;
};

int main()
{

  Pet dog;
  Pet cat("Garfield");
  std::cout << dog.name << "\n";
  dog.name = "Bob";
  dog.age = 3;
  dog.weight = 9;

  std::cout << dog.name << "\n";
  std::cout << cat.name << "\n"
            << cat.weight << "\n";
  cat.status();
}