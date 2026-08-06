#include <iostream>
using namespace std;

int paste(int x)
{
  if (x == 0)
  {
    return x;
  }
  paste(x - 1);
  cout << x << " ";
}

int main()
{
  int x = 4;
  paste(x);
  return 0;
}