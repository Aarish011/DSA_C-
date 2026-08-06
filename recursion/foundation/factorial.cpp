#include <iostream>
using namespace std;

int fact(int x)
{
  // Base case
  if (x == 1)
    return 1;

  // Recursive case
  return x * fact(x - 1);
}

int main()
{
  int x = 4;
  int ans = fact(x);

  cout << "Factorial = " << ans << endl;

  return 0;
}