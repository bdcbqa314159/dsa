#include <iostream>

// long long lcm_naive(int a, int b)
// {
//   for (long l = 1; l <= (long long)a * b; ++l)
//     if (l % a == 0 && l % b == 0)
//       return l;

//   return (long long)a * b;
// }

long long lcm_fast(int a, int b)
{

  int p = std::max(a, b);
  int q = std::min(a, b);

  for (long l = q; l <= (long long)p * q;)
  {
    if (l % p == 0)
      return l;
    l += q;
  }

  return (long long)a * b;
}

int main()
{
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
