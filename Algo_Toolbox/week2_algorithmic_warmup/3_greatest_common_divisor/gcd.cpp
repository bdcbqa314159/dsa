#include <iostream>

int gcd_naive(int a, int b)
{
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++)
  {
    if (a % d == 0 && b % d == 0)
    {
      if (d > current_gcd)
      {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

int gcd_fast(int a, int b)
{

  int p = std::max(a, b);
  int q = std::min(a, b);

  while (q != 0)
  {
    int temp = q;
    q = p % q;
    p = temp;
  }
  return p;
}

int main()
{
  int a, b;
  std::cin >> a >> b;
  // std::cout << gcd_naive(a, b) << std::endl;
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}
