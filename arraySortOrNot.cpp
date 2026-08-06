#include <iostream>
#include <vector>
using namespace std;

int isSorted(vector<int> arr, int x)
{

  if (x == 0 || x == 1)
  {
    return 1;
  }

  return arr[x - 1] >= arr[x - 2] && isSorted(arr, x - 1);
}

int main()
{
  vector<int> arr = {1, 2, 10, 4, 5};

  cout << isSorted(arr, arr.size()) << endl;
  return 0;
}