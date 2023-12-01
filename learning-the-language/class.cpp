#include <iostream>
#include <string>

class Person
{
public:
  Person(std::string n)
  {
    name = n;
    age = 0;
    weight = 0;
    height = 0;
  }

  void data()
  {
    std::cout << "Name: " << name << " age: "
              << age << " weight: "
              << weight << "\n"
              << height << "\n";
  }
  void setAge(int age)
  {
    this->age = age;
  }

private:
  std::string name;
  int age;
  int weight;
  double height;
};

int main()
{
  Person Thierry("Thierry");
  Thierry.setAge(25);
  Thierry.data();
}