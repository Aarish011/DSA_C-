#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
  string name;
  string dept;
  string subject;
  double salary;

public:
  Teacher(string name, string dept, string subject, double salary)
  {
    this->name = name;
    this->dept = dept;
    this->subject = subject;
    this->salary = salary;
  };

  // methods

  void changeDept(string newDept)
  {
    dept = newDept;
  }
  void display()
  {
    cout << "Teacher name is " << name << endl;
    cout << "Teacher Dept is " << dept << endl;
    cout << "Teacher Subject is " << subject << endl;
    cout << "Teacher salary is " << salary << endl;
  }
};

int main()
{
  Teacher t1("Aarish", "CSE", "DSA", 200000);
  t1.display();
  t1.changeDept("AI&ML");
  t1.display();
}