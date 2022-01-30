#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values)
{
  double value = 0.0;
  int n = weights.size();
  vector<double> units(n);
  unordered_map<double, pair<int, int>> umap;

  for (int i = 0; i < n; i++)
  {
    units[i] = (1. * values[i]) / weights[i];
    umap[units[i]] = make_pair(values[i], weights[i]);
  }

  sort(units.begin(), units.end());

  for (int i = n - 1; i >= 0; i--)
  {

    if (capacity == 0)
      break;
    int a = min(capacity, umap[units[i]].second);
    value += a * units[i];
    capacity -= a;
  }

  return value;
}

int main()
{
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++)
  {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
