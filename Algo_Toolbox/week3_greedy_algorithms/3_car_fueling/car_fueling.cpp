#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::max;
using std::vector;

int compute_min_refills(int dist, int tank, vector<int> &stops)
{

    int numRefills{}, currRefill{};
    int n = stops.size();

    while (currRefill <= n)
    {
        int lastRefill = currRefill;
        vector<int> stops1{};
        stops1.push_back(0);

        for (const auto &x : stops)
        {
            stops1.push_back(x);
        }
        stops1.push_back(dist);

        while ((currRefill <= n) && (stops1[currRefill + 1] - stops1[lastRefill]) <= tank)
        {
            currRefill++;
        }

        if (currRefill == lastRefill)
        {
            return -1;
        }

        if (currRefill <= n)
        {
            numRefills++;
        }
    }

    return numRefills;
}

int main()
{
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
