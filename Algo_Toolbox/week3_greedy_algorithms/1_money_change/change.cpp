#include <iostream>
#include <vector>

int get_change(int m)
{
  std::vector<int> money = {10, 5, 1};

  int i = 0;

  int n = 0;

  while (i < 3)
  {

    while (m - money[i] >= 0)
    {

      m -= money[i];
      n++;
    }

    i++;
  }

  return n;
}

int main()
{
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
