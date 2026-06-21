// // its a example of shallow copy where c++ se s1 = s2 it automatically called the copy constructor without wrting own
// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// private:
//   string name;
//   int Age;

// public:
//   Student(string name, int Age)
//   {
//     this->name = name;
//     this->Age = Age;
//   };

//   void display()
//   {
//     cout << "student  is " << name << endl;
//     cout << "student  age is " << Age << endl;
//   }
// };

// int main()
// {
//   Student s1("Aarish", 21);
//   Student s2 = s1;

//   s1.display();
//   s2.display();
// };

// deep copy example so the deepcopy is work with the dynamic memory allocation and shallow copy work with the vector memory

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
  string name;
  int age;

public:
  Student(string name, int age)
  {
    this->name = name;
    this->age = age;
  };

  void display()
  {
    cout << "studnet " << name << endl;
    cout << "Age" << age << endl;
  };
};

int main()
{
  Student s1("Aarish", 20);
  s1.display();
  Student s2 = s1;
  s2.display();

  s2("farhan", 15);
  s2.display();
  s1.display();
};