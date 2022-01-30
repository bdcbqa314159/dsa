#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int myCompare(string X, string Y)
{

  string XY = X.append(Y);

  string YX = Y.append(X);

  return XY.compare(YX) > 0 ? 1 : 0;
}

string largest_number(vector<string> arr)
{

  sort(arr.begin(), arr.end(), myCompare);
  stringstream ret;
  for (int i = 0; i < arr.size(); i++)
    ret << arr[i];
  string result;
  ret >> result;
  return result;
}

int main()
{
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++)
  {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
