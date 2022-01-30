#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>
#include <unordered_map>

using namespace std;

struct Segment
{
  int start, end;
};

bool cmp(Segment &s1, Segment &s2)
{
  return s1.end < s2.end;
}

vector<int> optimal_points(vector<Segment> &segments)
{
  vector<int> points;

  sort(segments.begin(), segments.end(), cmp);

  int r = -1;
  int N = segments.size();

  for (int i = 0; i < N; i++)
  {
    if (r < segments[i].start)
    {
      r = segments[i].end;
      points.push_back(r);
    }
  }

  return points;
}

int main()
{
  int n;
  std::cin >> n;
  vector<Segment> segments(n);
  for (size_t i = 0; i < segments.size(); ++i)
  {
    std::cin >> segments[i].start >> segments[i].end;
  }
  vector<int> points = optimal_points(segments);
  std::cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i)
  {
    std::cout << points[i] << " ";
  }

  return 0;
}
