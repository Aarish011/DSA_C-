#include <iostream>
using namespace std;

int SOD(int x)
{
  if (x == 0)
  {

    return 0;
  }
  return (x % 10) + SOD(x / 10);
}

int main()
{
  int x = 123;
  int ans = SOD(x);
  cout << "this is the ans :" << ans << endl;
  return 0;
}