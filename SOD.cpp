#include <iostream>
using namespace std;

int SOD(int x)
{
  if (x == 0)
    return 0;

  return (x % 10) + SOD(x / 10);
}

int main()
{
  int x = 44325;

  cout << SOD(x);
}